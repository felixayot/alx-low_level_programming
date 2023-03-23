#include "main.h"
/**
 * more_numbers - Entry point
 * Description: prints 10 times the numbers, from 0 to 14
 * Return: value
 */
void more_numbers(void)
{
int i;
int j;
for (i = 1; i <= 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j >= 10)
_putchar('1');
_putchar(j % 10 + '0');
}
_putchar('\n');
}
}
