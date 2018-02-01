
void asserter_crash_if_equal(int, int, int);
void asserter_crash_if_not_equal(int, int, int);
int set_empty(void);
int set_size(int);
int set_add(int, int);

int runner_main(void)
{
	// set_empty tests
	asserter_crash_if_not_equal(set_empty(), 0, __LINE__);

	// set_add tests
	asserter_crash_if_equal(set_add(set_empty(), 0), set_empty(), __LINE__);
	asserter_crash_if_equal(set_add(set_empty(), 1), set_add(set_empty(), 2), __LINE__);
	asserter_crash_if_equal(set_add(set_add(set_empty(), 1), 2), set_add(set_empty(), 2), __LINE__);
	asserter_crash_if_not_equal(set_add(set_add(set_empty(), 1), 1), set_add(set_empty(), 1), __LINE__);
	// TODO: add bigger than sizeof(int) * 8 elements

	// set_size tests
	asserter_crash_if_not_equal(set_size(set_empty()), 0, __LINE__);
	asserter_crash_if_not_equal(set_size(set_add(set_empty(), 1)), 1, __LINE__);
	asserter_crash_if_not_equal(set_size(set_add(set_add(set_empty(), 1), 2)), 2, __LINE__);
	// TODO: add more than sizeof(int) * 8 elements
	return 0;
}

