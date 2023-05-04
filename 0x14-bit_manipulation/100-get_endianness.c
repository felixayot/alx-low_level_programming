#include "main.h"
/**
 * get_endianness - Function prototype
 * Description: checks the endianness.
 * Return: 0 (Big endian) 1 (Little endian)
 */
int get_endianness(void)
{
unsigned int i = 1;
char *c = (char *)&i;
if (*c)
{
return (1);
}
else
{
return (0);
}
}
