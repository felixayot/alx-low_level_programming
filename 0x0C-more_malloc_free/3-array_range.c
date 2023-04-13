#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - Function prototype
 * Description: creates an array of integers.
 * @min: input int
 * @max: input int
 * Return: pointer to the newl created array or NULL (failure)
 */
int *array_range(int min, int max)
{
int *a, i;
if (min > max)
{
return (NULL);
}
a = malloc((max - min + 1) * sizeof(int));
if (a == NULL)
{
return (NULL);
}
for (i = 0; i <= (max - min); i++)
{
a[i] = min + i;
}
return (a);
}
