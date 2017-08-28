
int tests_assert(int condition)
{
	if (! condition)
	{
		return __LINE__;
	}
	return 0;
}

