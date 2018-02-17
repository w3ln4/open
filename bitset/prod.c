int bitset_empty(void)
{
	return 0;
}

int bitset_size(int set)
{
	/* Bit-Twiddling Hacks */
	/* TODO: shall export to bits module to provide more robust solutions
	 * based on hardware capabilities (eg. popcount instruction) */
	set = set - ((set >> 1) & ~(unsigned int)0/3);
	set = (set & ~(unsigned int)0/15*3) + ((set >> 2) & ~(unsigned int)0/15*3);
	set = (set + (set >> 4)) & ~(unsigned int)0/255*15;
	return (set * (~(unsigned int)0/255)) >> (sizeof(int) - 1) * 8;
}

int bitset_add(int set, int element)
{
	if (element == 16) return set;
	return set | (1 << element);
}

