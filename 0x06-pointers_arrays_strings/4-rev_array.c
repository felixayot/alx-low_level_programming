#include "main.h"
/**
 * reverse_array - Entry point
 * Description: reverses the content of an array of integers.
 * @a: input value as int
 * @n: input value as int
 * Return: void
 */
void reverse_array(int *a, int n)
{
int prov, s, e;
s = 0;
e = n - 1;
while (s < e)
{
prov = a[s];
a[s] = a[e];
a[e] = prov;
s++;
e--;
}
}
