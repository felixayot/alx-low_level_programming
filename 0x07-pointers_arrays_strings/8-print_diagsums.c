#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Function prototype
 * Description: prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: pointer to first element of a sq
 * @size: input as int
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int sum1 = 0;
int sum2 = 0;
int i;
for (i = 0; i < size; i++)
{
sum1 += a[i * size + i];
sum2 += a[i * size + (size - i - 1)];
}
printf("%d\n", sum1);
printf("%d\n", sum2);
}
