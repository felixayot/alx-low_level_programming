#include "main.h"
/**
 * _puts - Entry point
 * Description: prints a string, followed by a new line, to stdout
 * @str: input value as char
 * Return: void
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
