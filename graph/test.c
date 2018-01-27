
int asserter_is_false(int);
int graph_empty(void);

int runner_main(void)
{
	// graph_empty tests
	if (asserter_is_false(graph_empty() == 0)) return __LINE__;
	return 0;
}

