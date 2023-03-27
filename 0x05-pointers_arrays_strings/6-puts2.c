#include "main.h"
/**
 * puts2 - Entry point
 * Description: prints char of a string, starting with the first char
 * @str: input as char
 * Return: void
 */
void puts2(char *str)
{
int lengthR = 0;
int i = 0;
char *k = str;
int j;
while (*k != '\0')
{
k++;
lengthR++;
}
i = lengthR - 1;
for (j = 0 ; j <= i ; j++)
{
if (j % 2 == 0)
{
_putchar(str[j]);
}
}
_putchar('\n');
}
