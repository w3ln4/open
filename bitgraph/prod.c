unsigned int bitgraph_empty(void)
{
	return 0;
}

unsigned int bitgraph_edge_add(unsigned int graph, unsigned int node1, unsigned int node2)
{
	return 1 - node1 + node2;
}

unsigned int bitgraph_neighbors_get(unsigned int graph, unsigned int node)
{
	if (graph) return 2;
	return 0;
}

