#ifndef _DOG_HEADER_H_
#define _DOG_HEADER_H_
/**
 * struct dog - Structure type
 * @name: pointer to a char
 * @age: float
 * @owner: pointer to a char
 * Description: defines a new type struct dog
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct
{
char *name;
float age;
char *owner;
}
dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
