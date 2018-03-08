unsigned int bitset_empty(void)
{
	return 0;
}

unsigned int bitset_size(unsigned int set)
{
	/* Bit-Twiddling Hacks */
	/* TODO: shall export to bits module to provide more robust solutions
	 * based on hardware capabilities (eg. popcount instruction) */
	set = set - ((set >> 1) & ~(unsigned int)0/3);
	set = (set & ~(unsigned int)0/15*3) + ((set >> 2) & ~(unsigned int)0/15*3);
	set = (set + (set >> 4)) & ~(unsigned int)0/255*15;
	return (set * (~(unsigned int)0/255)) >> (sizeof(unsigned int) - 1) * 8;
}

unsigned int bitset_add(unsigned int set, unsigned int element)
{
	if (element > 15) return set;
	return set | (1U << element);
}

int bitset_contains(unsigned int set, unsigned int element)
{
	if (set >= (1U << element)) return 1;
	return 0;
}

