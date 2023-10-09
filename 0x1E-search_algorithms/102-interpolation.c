#include "search_algos.h"
/**
 * interpolation_search - Function name.
 * Description: Searches for a value in a sorted array of integers
 * using the Interpolation search algorithm.
 * @array: ptr to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: the value to search for.
 * Return: first index where value is located, OR
 * -1 if value is not present in array or array is NULL.
 */
int interpolation_search(int *array, size_t size, int value)
{
size_t pos, low = 0, high = size - 1;
if (array == 0)
return (-1);

while (value >= array[low] && value <= array[high] && low <= high)
{
pos = low + (((double)(high - low) / (array[high] - array[low]))
* (value - array[low]));
printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
if (array[pos] == value)
{
return (pos);
}
else if (array[pos] < value)
{
low = pos + 1;
}
else
{
high = pos - 1;
}
}
pos = low + (((double)(high - low) / (array[high] - array[low]))
* (value - array[low]));
printf("Value checked array[%lu] is out of range\n", pos);
return (-1);
}
