#ifndef _DOG_HEADER_H_
#define _DOG_HEADER_H_

#include <stddef.h>

/**
 * struct dog - Structure type
 * @name: pointer to a char
 * @age: float
 * @owner: pointer to a char
 * Description: defines a type dog
 */
struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t - defines type struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
