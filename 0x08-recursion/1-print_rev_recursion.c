#include "main.h"
/**
 * _print_rev_recursion - Function prototype
 * Description: Prints a string in reverse recursively
 * @s: input pointer
 * Return: void
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}
