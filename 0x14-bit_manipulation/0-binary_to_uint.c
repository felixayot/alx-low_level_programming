#include "main.h"
/**
 * binary_to_uint - Function prototype
 * Description: converts a binary number to an unsigned int.
 * @b: input pointer string
 * Return: converted number otherwise 0.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int res = 0;
int i;
if (b == NULL)
return (0);
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] == '0')
res = (res << 1);
else if (b[i] == '1')
res = (res << 1) | 1;
else
return (0);
}
return (res);
}
