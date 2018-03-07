
void asserter_crash_if(int, int);
void asserter_crash_if_not_equal(int, int, int);
void asserter_crash_if_equal(int, int, int);
unsigned int bitset_empty(void);
int bitset_is_in(unsigned int, unsigned int);

unsigned int bitgraph_empty(void);
unsigned int bitgraph_edge_add(unsigned int, unsigned int, unsigned int);
unsigned int bitgraph_neighbors_get(unsigned int, unsigned int);

int runner_main(void)
{
	// bitgraph_empty tests
	asserter_crash_if_not_equal(bitgraph_empty(), 0, __LINE__);

	// bitgraph_edge_add tests
	asserter_crash_if_equal(bitgraph_edge_add(bitgraph_empty(), 0, 0), bitgraph_empty(), __LINE__);

	// bitgraph_neighbors_get tests
	asserter_crash_if_not_equal(bitgraph_neighbors_get(bitgraph_empty(), 0), bitset_empty(), __LINE__);
	asserter_crash_if_equal(bitgraph_neighbors_get(bitgraph_edge_add(bitgraph_empty(), 0, 0), 0), bitset_empty(), __LINE__);
	asserter_crash_if(! bitset_is_in(bitgraph_neighbors_get(bitgraph_edge_add(bitgraph_empty(), 0, 1), 0), 1), __LINE__);

	return 0;
}

