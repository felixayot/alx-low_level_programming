#include "main.h"
/**
 * _strcpy - Entry point
 * Description:
 * @dest: input pointer
 * @src: input pointer
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
int j = 0;
while (*(src + i) != '\0')
{
i++;
}
for (; j < i ; j++)
{
dest[j] = src[j];
}
dest[i] = '\0';
return (dest);
}
