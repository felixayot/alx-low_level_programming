#include "main.h"
/**
 * _islower - Entry point
 * Description: shows if input is a lowercase char or 0
 * @c : The char in ASCII table
 * Return: 1 for lowercase char, 0 for the rest.
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
