
int runner_start(int (*func)(void));

static int _runner_test_func(void)
{
	return 0;
}

int main(void)
{
	if (runner_start(_runner_test_func) != 0) return 1;
	return 0;
}

