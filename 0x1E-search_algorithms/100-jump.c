#include "search_algos.h"
/**
 * jump_search - Function name.
 * Description: Searches for a value in a sorted array of integers
 * using the Jump search algorithm.
 * @array: ptr to the first element of the array to search in.
 * @size: number of elements in the array.
 * @value: the value to search for.
 * Return: first index where value is located, OR
 * -1 if value is not present in array or array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
int jump;
int i;
if (array == NULL)
return (-1);

jump = sqrt(size);
i = 0;
do {
printf("Value checked array[%d] = [%d]\n", i, array[i]);
i += jump;
if ((size_t)i >= size)
break;
} while (array[i] < value);
printf("Value found between indexes [%d] and [%d]\n", i - jump, i);
i -= jump;
while (array[i] < value)
{
printf("Value checked array[%d] = [%d]\n", i, array[i]);
i++;
if ((size_t)i == size)
return (-1);
}
if (array[i] == value)
{
printf("Value checked array[%d] = [%d]\n", i, array[i]);
return (i);
}
return (-1);
}
