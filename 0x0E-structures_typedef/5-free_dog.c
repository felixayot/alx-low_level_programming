#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_dog - Function prototype
 * Description: frees dogs
 * @d: input pointer
 */
void free_dog(dog_t *d)
{
if (d == NULL)
{
return;
}
free(d->name);
free(d->owner);
free(d);
}
