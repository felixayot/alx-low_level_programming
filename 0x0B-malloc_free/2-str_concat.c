#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Function prototype
 * Description: concatenates two strings.
 * @s1: input char string
 * @s2: input char string
 * Return: pointer (newly allocated space in mem) NULL
 * empty string (failure)
 */
char *str_concat(char *s1, char *s2)
{
size_t s1_len, s2_len;
char *linked_str;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
s1_len = strlen(s1);
s2_len = strlen(s2);
linked_str = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
if (linked_str == NULL)
{
return (NULL);
}
strcpy(linked_str, s1);
strcat(linked_str, s2);
return (linked_str);
}
