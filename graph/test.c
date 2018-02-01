
void asserter_crash_if_not_equal(int, int, int);
int graph_empty(void);

int runner_main(void)
{
	// graph_empty tests
	asserter_crash_if_not_equal(graph_empty(), 0, __LINE__);
	return 0;
}

