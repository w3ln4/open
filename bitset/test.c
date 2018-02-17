
void asserter_crash_if_equal(int, int, int);
void asserter_crash_if_not_equal(int, int, int);
int bitset_empty(void);
int bitset_size(int);
int bitset_add(int, int);

int runner_main(void)
{
	// bitset_empty tests
	asserter_crash_if_not_equal(bitset_empty(), 0, __LINE__);

	// bitset_add tests
	asserter_crash_if_equal(bitset_add(bitset_empty(), 0), bitset_empty(), __LINE__);
	asserter_crash_if_equal(bitset_add(bitset_empty(), 1), bitset_add(bitset_empty(), 2), __LINE__);
	asserter_crash_if_equal(bitset_add(bitset_add(bitset_empty(), 1), 2), bitset_add(bitset_empty(), 2), __LINE__);
	asserter_crash_if_not_equal(bitset_add(bitset_add(bitset_empty(), 1), 1), bitset_add(bitset_empty(), 1), __LINE__);

	// ignore out of minimal int size values
	asserter_crash_if_equal(bitset_add(bitset_empty(), 15), bitset_empty(), __LINE__);
	asserter_crash_if_not_equal(bitset_add(bitset_empty(), 16), bitset_empty(), __LINE__);
	asserter_crash_if_not_equal(bitset_add(bitset_empty(), 0x7FFF), bitset_empty(), __LINE__);

	// bitset_size tests
	asserter_crash_if_not_equal(bitset_size(bitset_empty()), 0, __LINE__);
	asserter_crash_if_not_equal(bitset_size(bitset_add(bitset_empty(), 1)), 1, __LINE__);
	asserter_crash_if_not_equal(bitset_size(bitset_add(bitset_add(bitset_empty(), 1), 2)), 2, __LINE__);

	return 0;
}

