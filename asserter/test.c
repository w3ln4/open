
#define TEST(cond) if (cond) return __LINE__

int main(void)
{
	TEST(  asserter_check(0 == 0));
	TEST(! asserter_check(1 == 0));
	return 0;
}

