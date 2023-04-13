#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
/**
 * malloc_checked - Function prototype
 * Description: allocates memory using malloc.
 * @b: input int
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
void *p = malloc(b);
if (p == NULL)
{
fprintf(stderr, "malloc failed: %s\n", strerror(errno));
exit(98);
}
return (p);
}
