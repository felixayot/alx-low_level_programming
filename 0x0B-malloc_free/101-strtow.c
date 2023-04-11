#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * strtow - Function prototype
 * Description: splits a string into words.
 * @str: input char string
 * Return: pointer to an array of strings (words)
 * or NULL (failure)
 */
char **strtow(char *str)
{
int a, b, c, d, length;
char **words;
if (str == NULL || str[0] == '\0')
return (NULL);
d = 0;
for (a = 0; str[a] != '\0'; a++)
{
if (str[a] != ' ' && (a == 0 || str[a - 1] == ' '))
d++;
}
words = malloc(sizeof(char *) * (d + 1));
if (words == NULL)
return (NULL);
c = 0;
for (a = 0; a < d; a++)
{
while (*str == ' ')
str++;
length = 0;
while (str[length] != '\0' && str[length] != ' ')
length++;
words[c] = malloc(sizeof(char) * (length + 1));
if (words[c] == NULL)
{
for (b = 0; b < c; c++)
free(words[b]);
free(words);
return (NULL);
}
strncpy(words[c], str, length);
words[c][length] = '\0';
c++;
str += length;
}
words[c] = NULL;
return (words);
}
