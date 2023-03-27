#include "main.h"
/**
 * print_rev - Entry point
 * Description: prints a string, in reverse
 * @s: input value as char
 * Return: void
 */
void print_rev(char *s)
{
int lengthR = 0;
int i;
while (*s != '\0')
{
lengthR++;
s++;
}
s--;
for (i = lengthR; i > 0; i--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
