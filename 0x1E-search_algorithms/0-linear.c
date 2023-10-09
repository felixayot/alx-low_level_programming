#include "search_algos.h"
/**
 * linear_search - Function name.
 * Description: Searches for a value in an array of integers
 * using the Linear search algorithm.
 * @array: ptr to the first element of the array to search in.
 * @size: number of elements in the array.
 * @value: the value to search for.
 * Return: first index where value is located, OR
 * -1 if value is not present in array or array is NULL.
 */
int linear_search(int *array, size_t size, int value)
{
int i;
if (array == NULL)
return (-1);

for (i = 0; (size_t)i < size; i++)
{
printf("Value checked array[%d] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}
return (-1);
}
