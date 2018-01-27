
int runner_start(int (*func)(void));
void runner_crash(int);

static int _runner_test_func_0(void)
{
	return 0;
}

static int _runner_test_func_1(void)
{
	return 1;
}

int main(void)
{
	if (runner_start(_runner_test_func_0) != 0) return 1;
	if (runner_start(_runner_test_func_1) != 1) return 2;
	runner_crash(0);
	return 3;
}

