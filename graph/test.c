
void asserter_crash_if_false(int, int);
int graph_empty(void);

int runner_main(void)
{
	// graph_empty tests
	asserter_crash_if_false(graph_empty() == 0, __LINE__);
	return 0;
}

