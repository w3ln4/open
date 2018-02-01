void runner_crash(int);

void asserter_crash_if_false(int condition, int return_code)
{
	if (condition) return;
	runner_crash(return_code);
}

