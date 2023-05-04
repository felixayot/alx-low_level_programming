#include "main.h"
/**
 * flip_bits - Function prototype
 * Description: returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: input int
 * @m: input int
 * Return: number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int a = n ^ m;
unsigned int num = 0;
while (a)
{
num++;
a &= a - 1;
}
return (num);
}
