
void asserter_crash_if_false(int, int);

int runner_main(void)
{
	asserter_crash_if_false(0 == 0, __LINE__);
	asserter_crash_if_false(1 == 0, 0);
	return __LINE__;
}

