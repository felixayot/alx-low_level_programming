#include "main.h"
/**
 * print_triangle - Entry point
 * Description: prints a triangle
 * @size: input as size of triangle
 * Return: void
 */
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i;
int j;
for (i = 1; i <= size; i++)
{
for (j = 1; j < size; j++)
{
_putchar(' ');
}
for (j = 1; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
