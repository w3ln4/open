int set_empty(void)
{
	return 0;
}

int set_size(int set)
{
	int size = 0;
	while (set)
	{
		size += set & 1;
		set >>= 1;
	}
	return size;
}

int set_add(int set, int element)
{
	return set | (1 << element);
}

