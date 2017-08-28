
#define tests_assert(x) 0

int main()
{
	if (tests_assert(0) == 0)
	{
		return 1;
	}
	return tests_assert(moves_from_field(field, &moves) == 0);
}

