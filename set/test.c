
int asserter_check(int);
int set_empty(void);

int main(void)
{
	if (! asserter_check(set_empty() == 0)) return __LINE__;
	return 0;
}

