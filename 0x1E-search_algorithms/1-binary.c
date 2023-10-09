#include "search_algos.h"
/**
 * binary_search - Function name.
 * Description: Searches for a value in a sorted array of integers
 * using the Binary search algorithm.
 * @array: ptr to the first element of the array to search in.
 * @size: the number of elements in the array.
 * @value: the value to search for.
 * Return: index where value is located, OR
 * -1 if value is not present in array or array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
int mid, left = 0, right = (size_t)size - 1;
if (array == NULL)
return (-1);

while (left <= right)
{
printf("Searching in array: ");
for (mid = left; mid <= right; mid++)
{
printf("%d", array[mid]);
if (mid < right)
printf(", ");
}
printf("\n");
mid = floor((left + right) / 2);
if (array[mid] < value)
{
left = mid + 1;
}
else if (array[mid] > value)
{
right = mid - 1;
}
else
{
return (mid);
}
}
return (-1);
}
