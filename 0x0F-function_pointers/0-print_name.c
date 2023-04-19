#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Function prototype
 * Description: prints a name.
 * @name: input pointer to char
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
(*f)(name);
printf("%s", name);
}
