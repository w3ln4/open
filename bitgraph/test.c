
void asserter_crash_if_not_equal(int, int, int);
unsigned int bitgraph_empty(void);
unsigned int bitgraph_edge_add(unsigned int, unsigned int, unsigned int);

int runner_main(void)
{
	// bitgraph_empty tests
	asserter_crash_if_not_equal(bitgraph_empty(), 0, __LINE__);

	// bitgraph_edge_add tests
	asserter_crash_if_equal(bitgraph_edge_add(bitgraph_empty(), 0, 0), bitgraph_empty());

	return 0;
}

