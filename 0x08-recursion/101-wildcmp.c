#include "main.h"
/**
 * wildcmp - Function prototype
 * Description: two string comparison
 * @s1: pointer with string input
 * @s2: pointer with string input
 * Return: 1 (if considered identical) else 0
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
{
return (1);
}
else if (*s2 == '*')
{
if (*s1 == '\0')
{
return (wildcmp(s1, s2 + 1));
}
else
{
return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
}
}
else if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
}
else
{
return (0);
}
}
