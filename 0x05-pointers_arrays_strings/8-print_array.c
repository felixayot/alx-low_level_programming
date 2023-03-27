#include "main.h"
#include <stdio.h>
/**
 * print_array - Entry point
 * Description: prints n elements of an array of integers
 * @a: input number as an int
 * @n: input number as an int
 * Return: void
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < (n - 1); i++)
{
printf("%d, ", a[i]);
}
if (i == (n - 1))
{
printf("%d", a[n - 1]);
}
printf("\n");
}
