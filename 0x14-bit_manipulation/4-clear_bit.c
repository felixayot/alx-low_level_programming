#include "main.h"
/**
 * clear_bit - Function prototype
 * Description: sets the value of a bit to 0 at a given index.
 * @n: input pointer
 * @index: input int
 * Return: 1 (Success) or -1 (Failure)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
*n &= ~(1UL << index);
return (1);
}
