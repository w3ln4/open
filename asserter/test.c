
int asserter_is_false(int);

int main(void)
{
	if (  asserter_is_false(0 == 0)) return __LINE__;
	if (! asserter_is_false(1 == 0)) return __LINE__;
	return 0;
}

