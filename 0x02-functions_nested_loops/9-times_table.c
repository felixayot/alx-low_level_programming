#include "main.h"
/**
 * times_table - Entry point
 * Description: prints the 9 time table starting with 0
 * Return: times table
 */
int void times_table(void)
{
int i, product;
for (int i = 0; i <= 10; i++)
{
product = i * 9;
if (product < 10)
{
_putchar('0' + product);
}
else
{
_putchar('0' + product / 10);
_putchar('0' + product % 10);
}
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
