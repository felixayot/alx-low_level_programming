#include "main.h"
/**
 * _strcmp - Entry point
 * Description: compares two strings
 * @s1: input pointer
 * @s2: input pointer
 * Return: result
 */
int _strcmp(char *s1, char *s2)
{
int i = 0, r;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
r = s1[i] - s2[i];
break;
}
else
{
r = s1[i] - s2[i];
}
i++;
}
return (r);
}
