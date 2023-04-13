#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - Function prototype
 * Description: allocates memory for an array, using malloc
 * @nmemb: input int
 * @size: input int
 * Return: pointer to allocated mem, or NULL (failure)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *p = malloc(nmemb * size);
if (nmemb == 0 || size == 0)
{
return (NULL);
}
if (p == NULL)
{
return (NULL);
}
memset(p, 0, nmemb * size);
return (p);
}
