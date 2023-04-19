#include "function_pointers.h"
/**
 * array_iterator - Function prototype
 * Description: returns the length of a string using recursion
 * @array: input pointer to char
 * @size: size of array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)
{
(*action)(array[i]);
}
}
