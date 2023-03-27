#include "main.h"
/**
 * _strlen - Entry point
 * Description: returns the length of a string
 * @s: input value of int
 * Return: length of a string
 */
int _strlen(char *s)
{
int length_string = 0;
while (*s != '\0')
{
length_string++;
s++;
}
return (length_string);
}
