
int runner_start(int (*func)(void));

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
	return 0;
}

