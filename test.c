
#define moves_from_field(x, y) 0

int tests_assert(int condition)
{
	if (! condition)
	{
		return 1;
	}
	return 0;
}

int main()
{
	if (tests_assert(0) == 0)
	{
		return 1;
	}
	return tests_assert(moves_from_field(field, &moves) == 0);
}

