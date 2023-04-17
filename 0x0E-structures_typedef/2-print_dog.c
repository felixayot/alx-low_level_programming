#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Function prototype
 * Description: prints a struct dog
 * @d: input pointer
 * Return: void
 */
void print_dog(struct dog *d)
{
char *name;
float age;
char *owner;
if (d == NULL)
{
return;
}
name = d->name != NULL ? d->name : "(nil)";
age = d->age;
owner = d->owner != NULL ? d->owner : "(nil)";
printf("Name: %s\n", name);
printf("Age: %.6g\n", age);
printf("Owner: %s\n", owner);
}
