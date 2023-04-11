#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - Function prototype
 * Description: concatenates all the arguments of your program.
 * @ac: input int
 * @av: input char string
 * Return: pointer to a new string (Success) or NULL (failure)
 */
char *argstostr(int ac, char **av)
{
int m, n, length;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
length = 0;
for (m = 0; m < ac; m++)
length += strlen(av[m]) + 1;
str = malloc(sizeof(char) * length);
if (str == NULL)
return (NULL);
length = 0;
for (m = 0; m < ac; m++)
{
for (n = 0; av[m][n] != '\0'; n++)
str[length++] = av[m][n];
str[length++] = '\n';
}
str[length] = '\0';
return (str);
}
