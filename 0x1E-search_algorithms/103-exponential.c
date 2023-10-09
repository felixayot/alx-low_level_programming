#include "search_algos.h"
/**
 * expo_binary_search - Function name.
 * Description: Searches for a value in a sorted array of integers
 * using the Binary search algorithm.
 * @array: ptr to the first element of the array to search in.
 * @left: first element of the lower half of the array.
 * @right: last element of the higher half of the array.
 * @value: the value to search for.
 * Return: index where value is located, OR
 * -1 if value is not present in array or array is NULL.
 */
int expo_binary_search(int *array, int left, int right, int value)
{
int mid;
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

/**
 * exponential_search - Function name.
 * Description: Searches for a value in a sorted array of integers
 * using the Exponential search algorithm.
 * @array: ptr to the first element of the array to search in.
 * @size: the number of elements in the array.
 * @value: the value to search for.
 * Return: index where value is located, OR
 * -1 if value is not present in array or array is NULL.
 */
int exponential_search(int *array, size_t size, int value)
{
size_t bound;
if (array == NULL)
return (-1);

bound = 1;
while (bound < size && array[bound] < value)
{
printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
bound *= 2;
}
if (bound < size - 1)
{
printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, bound);
return (expo_binary_search(array, bound / 2, bound, value));
}
else
{
printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, size - 1);
return (expo_binary_search(array, bound / 2, size - 1, value));
}
}
