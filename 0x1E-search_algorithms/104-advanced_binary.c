#include "search_algos.h"
/**
 * recursive_binary - Function name.
 * Description: Recursively searches for a value in a sorted
 * array of integers using binary search.
 * @array: ptr to the first element of the [sub]array to search.
 * @left: The starting index of the [sub]array to search.
 * @right: The ending index of the [sub]array to search.
 * @value: The value to search for.
 * Return: the index where value is located, OR
 * -1 if value is not present in array or array is NULL.
 */
int recursive_binary(int *array, size_t left, size_t right, int value)
{
size_t i;
if (right < left)
return (-1);

printf("Searching in array: ");
for (i = left; i < right; i++)
printf("%d, ", array[i]);
printf("%d\n", array[i]);

i = left + (right - left) / 2;
if (array[i] == value && (i == left || array[i - 1] != value))
return (i);
if (array[i] >= value)
return (recursive_binary(array, left, i, value));
return (recursive_binary(array, i + 1, right, value));
}

/**
 * advanced_binary - Function name.
 * Description: Searches for a value in a sorted array of integers.
 * @array: ptr to the first element of the array to search in.
 * @size: the number of elements in the array.
 * @value: the value to search for.
 * Return: the index where value is located, OR
 * -1 if value is not present in array or array is NULL.
 */
int advanced_binary(int *array, size_t size, int value)
{
if (array == NULL || size == 0)
return (-1);

return (recursive_binary(array, 0, size - 1, value));
}
