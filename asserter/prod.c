void runner_crash(int);

void asserter_crash_if_false(int condition, int return_code)
{
	if (condition) return;
	runner_crash(return_code);
}

void asserter_crash_if_equal(int lvalue, int rvalue, int return_code)
{
	asserter_crash_if_false(lvalue != rvalue, return_code);
}

void asserter_crash_if_not_equal(int lvalue, int rvalue, int return_code)
{
	asserter_crash_if_false(lvalue == rvalue, return_code);
}

