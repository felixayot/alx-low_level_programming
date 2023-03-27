#include "main.h"
/**
 * swap_int - Entry point
 * Description: swaps the values of two integers
 * @a: input value as int
 * @b: input value as int
 * Return: void
 */
void swap_int(int *a, int *b)
{
int m;
m = *a;
*a = *b;
*b = m;
}
