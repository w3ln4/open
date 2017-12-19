
int asserter_check(int);
int set_empty(void);
int set_size(int);

int main(void)
{
	if (asserter_check(set_empty() == 0)) return __LINE__;
	if (asserter_check(set_size(set_empty()) == 0)) return __LINE__;
	return 0;
}

