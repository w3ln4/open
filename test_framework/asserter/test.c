
void asserter_crash_if(int, int);

int runner_main(void)
{
	asserter_crash_if(1 == 0, __LINE__);
	asserter_crash_if(0 == 0, 0);
	return __LINE__;
}

