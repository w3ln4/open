
#define moves_from_field(x, y) 0

extern int tests_assert(int condition);

int main()
{
	if (tests_assert(0) == 0)
	{
		return 1;
	}
	return tests_assert(moves_from_field(field, &moves) == 0);
}

