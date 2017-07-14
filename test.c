
int main()
{
	tdd_assert(moves_from_field(field, &moves) == 0);

	tdd_print();

	return tdd_failed();
}

