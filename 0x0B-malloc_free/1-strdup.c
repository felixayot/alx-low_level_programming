#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Function prototype
 * Description: returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string
 * given as a parameter
 * @str: input char string
 * Return: pointer to the duplicated string
 * (Success) NULL (insufficient mem)
 */
char *_strdup(char *str)
{
char *copy_str;
if (str == NULL)
{
return (NULL);
}
copy_str = (char *)malloc((strlen(str) + 1) * sizeof(char));
if (copy_str == NULL)
{
return (NULL);
}
strcpy(copy_str, str);
return (copy_str);
}
