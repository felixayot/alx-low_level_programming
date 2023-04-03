#include "main.h"
#include <stddef.h>
/**
 * *_strstr - Function prototype
 * Description: locates a substring
 * @haystack: pointer to the start of the string
 * @needle: pointer to the substring
 * Return: haystack (pointer to the beginning of the located substring)
 * or NULL (substring is not found)
 */
char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
{
return (haystack);
}
while (*haystack != '\0')
{
char *hst = haystack;
char *ndl = needle;
while (*hst == *ndl && *ndl != '\0')
{
hst++;
ndl++;
}
if (*ndl == '\0')
{
return (haystack);
}
haystack++;
}
return (NULL);
}
