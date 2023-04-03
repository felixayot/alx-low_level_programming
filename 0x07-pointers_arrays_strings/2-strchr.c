#include "main.h"
#include <stddef.h>
/**
 * *_strchr - Function prototype
 * Description: locates a character in a string
 * @s: pointer to the start of the string
 * @c: input char
 * Return: s (first occurrence of the character c)
 * otherwise NULL (character is not found)
 */
char *_strchr(char *s, char c)
{
while (*s != '\0' && *s != c)
{
s++;
}
if (*s == c)
{
return (s);
}
else
{
return (NULL);
}
}
