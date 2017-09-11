#include "prod.h"

int tests_assert(int condition)
{
	if (! condition)
	{
		return __LINE__;
	}
	return 0;
}

int moves_from_field(Field field, Moves *moves)
{
	(void) field;
	(void) moves;
	return 0;
}

