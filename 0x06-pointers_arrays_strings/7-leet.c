#include "main.h"
/**
 * *leet - Entry point
 * Description: encodes a string into 1337.
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @s: input pointer
 * Return: absolute value
 */
char *leet(char *s)
{
int i, c = 0;
int sl[] = {97, 101, 111, 116, 108};
int ul[] = {65, 69, 79, 84, 76};
int n[] = {52, 51, 48, 55, 49};
while (s[c] != '\0')
{
for (i = 0; i < 5; i++)
{
if (s[c] == sl[i] || s[c] == ul[i])
{
s[c] = n[i];
break;
}
}
c++;
}
return (s);
}
