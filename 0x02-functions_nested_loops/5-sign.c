#include "main.h"
/**
 * print_sign - Entry point
 * Description: Determines if the input no. is greater,equal or less than 0
 * @n: The input no. as an int
 * Return: 1 > 0, 0=zero or -1 < 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
_putchar('\n');
}
