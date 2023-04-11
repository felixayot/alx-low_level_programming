#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - Function prototype
 * Description: creates an array of chars,
 * and initializes it with a specific char.
 * @size: input int
 * @c: int char
 * Return: pointer to the array (Success) NULL (if it fails)
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array;
if (size == 0)
{
return (NULL);
}
array = (char *)malloc(size * sizeof(char));
if (array == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}
