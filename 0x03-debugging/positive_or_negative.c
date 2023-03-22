#include "main.h"

/**
 * positive_or_negative - Entry point
 * Description: prints 0 is zero
 * @i: input no as an int
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);

	else if (i < 0)
		printf("%d is negative\n", i);

	else
		printf("%d is zero\n", i);
}
