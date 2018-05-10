void runner_crash(int);

void asserter_crash_if(int condition, int return_code)
{
	if (condition) runner_crash(return_code);
}

void asserter_crash_if_equal(int lvalue, int rvalue, int return_code)
{
	asserter_crash_if(lvalue == rvalue, return_code);
}

void asserter_crash_if_not_equal(int lvalue, int rvalue, int return_code)
{
	asserter_crash_if(lvalue != rvalue, return_code);
}

