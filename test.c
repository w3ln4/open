
#include "prod.h"

int main(void)
{
	if (tests_assert(0) == 0)
	{
		return __LINE__;
	}
	return tests_assert(moves_from_field(0, 0) == 0);
}

