#include "main.h"
/**
 * _strspn - Function prototype
 * Description: gets the length of a prefix substring
 * @s: pointer to the start of the string
 * @accept: pointer to the string of accepted chars
 * Return: initial length of s
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int lngth = 0;
int fchar;
char *p = accept;
while (*s != '\0')
{
fchar = 0;
while (*accept != '\0')
{
p++;
if (*s == *p)
{
fchar = 1;
break;
}
}
if (fchar == 0)
{
break;
}
lngth++;
s++;
}
return (lngth);
}
