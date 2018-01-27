int runner_start(int (*func)(void));
int runner_main(void);

int main(void)
{
	return runner_start(runner_main);
}
