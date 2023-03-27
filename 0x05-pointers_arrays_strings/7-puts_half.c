#include "main.h"
/**
 * puts_half - Entry point
 * Description: prints half of a string
 * @str: input value as char
 * Return: void
 */
void puts_half(char *str)
{
int a, n, lengthR;
lengthR = 0;
for (a = 0; str[a] != '\0'; a++)
lengthR++;
n = (lengthR / 2);
if ((lengthR % 2) == 1)
n = ((lengthR + 1) / 2);
for (a = n; str[a] != '\0'; a++)
_putchar(str[a]);
_putchar('\n');
}
