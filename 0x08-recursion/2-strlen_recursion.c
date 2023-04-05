#include "main.h"
/**
 * _strlen_recursion - Function prototype
 * Description: returns the length of a string using recursion
 * @s: input pointer
 * Return: 0 (if current char is null terminator)
 * otherwise add 1 to next character in the string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}
