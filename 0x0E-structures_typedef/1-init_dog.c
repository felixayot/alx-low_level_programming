#include "dog.h"
/**
 * init_dog - Function prototype
 * Description: initializes a variable of type struct dog
 * @d: input pointer
 * @name: input pointer
 * @age: input float
 * @owner: input pointer
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
return;
}
else
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
