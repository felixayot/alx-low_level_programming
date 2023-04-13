#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - Function prototype
 * Description: reallocates a memory block using malloc and free
 * @ptr: input pointer
 * @old_size: input int
 * @new_size: input int
 * Return: new pointer  or NULL (failure)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *np;
if (new_size == 0)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
return (malloc(new_size));
}
if (new_size <= old_size)
{
return (ptr);
}
np = malloc(new_size);
if (np == NULL)
{
return (NULL);
}
memcpy(np, ptr, old_size);
free(ptr);
return (np);
}
