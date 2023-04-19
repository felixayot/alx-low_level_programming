#include "function_pointers.h"
/**
 * int_index - Function prototype
 * Description: searches for an integer.
 * @array: input pointer to int
 * @size: input int
 * @cmp: function pointer
 * Return: index of the first element or -1 (Failure)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if ((*cmp)(array[i]))
{
return (i);
}
}
return (-1);
}
