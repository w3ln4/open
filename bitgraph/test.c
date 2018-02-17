
void asserter_crash_if_not_equal(int, int, int);
int bitgraph_empty(void);

int runner_main(void)
{
	// bitgraph_empty tests
	asserter_crash_if_not_equal(bitgraph_empty(), 0, __LINE__);
	return 0;
}

