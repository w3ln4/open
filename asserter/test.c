
int asserter_check(int);

int main(void)
{
	if (  asserter_check(0 == 0)) return 6;
	if (! asserter_check(1 == 0)) return 7;
	return 0;
}

