#include "main.h"
/**
 * print_last_digit - Entry point
 * Description: Prints the last digit of a no.
 * @n: input number as an int
 * Return: last digit
 */
int print_last_digit(int n)
{
int l;
l = n % 10;
if (l < 0)
{
_putchar(-l + 48);
return (-l);
}
else
{
_putchar(l + 48);
return (l);
}
}
