#include "main.h"
/**
 * *_memset- function prototype
 * Description: fills memory with a constant byte.
 * @s: input pointer
 * @b: input char
 * @n:  input int
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
