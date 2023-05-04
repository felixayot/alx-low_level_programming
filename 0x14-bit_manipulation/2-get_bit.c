#include "main.h"
/**
 * get_bit - Function prototype
 * Description: returns the value of a bit at a given index.
 * @n: input int
 * @index: input int
 * Return: value of the bit at index or -1 (Failure)
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
else
{
return ((n >> index) & 1);
}
}
