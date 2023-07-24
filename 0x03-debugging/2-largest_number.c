#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;
/* Check if a is the greatest */
	if (a > b && a > c)
	{
		largest = a;
	}
/* 1st condition is FALSE, compare b to c */
	else if (b > c)
	{
		largest = b;
	}
/* 2nd condition is also FALSE, hence c is the greatest */
/* this condition is the catch-all for all the previous checks */
	else
	{
		largest = c;
	}

	return (largest);
}
