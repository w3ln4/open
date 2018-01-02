
int asserter_is_false(int);
int set_empty(void);
int set_size(int);
int set_add(int, int);

int main(void)
{
	if (asserter_is_false(set_empty() == 0)) return __LINE__;
	if (asserter_is_false(set_size(set_empty()) == 0)) return __LINE__;
	if (asserter_is_false(set_add(set_empty(), 1) != set_empty())) return __LINE__;
	return 0;
}

