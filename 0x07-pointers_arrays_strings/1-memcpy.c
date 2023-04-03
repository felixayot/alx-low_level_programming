#include "main.h"
/**
 * * _memcpy - Function prototype
 * Description: copies memory area
 * @dest: input pointer for destination address
 * @src: input pointer for source address
 * @n: input vaule as int
 * Return: original pointer destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *original_dest = dest;
while (n-- > 0)
{
*dest++ = *src++;
}
return (original_dest);
}
