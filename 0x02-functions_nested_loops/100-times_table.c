#include "main.h"
/**
 * print_times_table - Entry point
 * Description: This prints the n times table, starting with 0.
 * @n: input number as an int
 * Return: result
 */
void print_times_table(int n)
{
if (n < 0 || n > 15)
{
return;
}
for (int i = 0; i <= n; i++)
{
for (int j = 0; j <= n; j++)
{
int result = i * j;
if (j == 0)
{
_putchar('0');
}
else if (result < 10)
{
_putchar(' ');
_putchar(' ');
_putchar(result + '0');
}
else if (result < 100)
{
_putchar(' ');
_putchar(result / 10 + '0');
_putchar(result % 10 + '0');
}
else
{
_putchar(result / 100 + '0');
_putchar((result / 10) % 10 + '0');
_putchar(result % 10 + '0');
}
if (j < n)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
