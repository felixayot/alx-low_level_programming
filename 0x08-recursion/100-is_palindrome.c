#include "main.h"
#include <string.h>
/**
 * is_palindrome_recursive - helper function
 * Description: Determines a palindrome
 * @s: input pointer
 * @a: input int
 * @b: input int
 * Return: int value
 */
int is_palindrome_recursive(char *s, int a, int b)
{
if (a >= b)
{
return (1);
}
else if (s[a] != s[b])
{
return (0);
}
else
{
return (is_palindrome_recursive(s, a + 1, b - 1));
}
}
/**
 * is_palindrome - main function
 * Description: calls a palindrome
 * @s: input pointer
 * Return: 1 (palindrome) else 0
 */
int is_palindrome(char *s)
{
int c = strlen(s);
return (is_palindrome_recursive(s, 0, c - 1));
}
