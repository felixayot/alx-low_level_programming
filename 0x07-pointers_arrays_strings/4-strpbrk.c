#include "main.h"
#include <stddef.h>
/**
 * *_strpbrk - Function prototype
 * Description: searches a string for any of a set of bytes
 * @s: pointer to the start of the string
 * @accept: pointer to the string of accepted chars
 * Return: s (matches one of the bytes)
 * or NULL (no byte is found)
 */
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *p = accept;
while (*accept != '\0')
{
if (*s == *p)
{
return (s);
}
p++;
}
s++;
}
return (NULL);
}
