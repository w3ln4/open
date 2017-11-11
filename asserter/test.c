
int asserter_check(int);

int main(void)
{
	if (  asserter_check(0 == 0)) return __LINE__;
	if (! asserter_check(1 == 0)) return __LINE__;
	return 0;
}

