#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - Function prototype
 * Description: concatenates two strings.
 * @s1: input char string
 * @s2: input char string
 * @n: input int
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
size_t s1_length;
size_t s2_length;
char *result;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
s1_length = strlen(s1);
s2_length = strlen(s2);
if (n >= s2_length)
n = s2_length;
result = (char *) malloc(s1_length + n + 1);
if (result == NULL)
return (NULL);
strncpy(result, s1, s1_length);
strncpy(result + s1_length, s2, n);
result[s1_length + n] = '\0';
return (result);
}
