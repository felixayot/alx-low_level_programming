#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point
 * Description: adds positive numbers
 * @argc: Count of arguments passed
 * @argv: Array of argument strings
 * Return: 0 (Success) 1 (Error)
 */
int main(int argc, char *argv[])
{
int i, j;
int sum = 0;
if (argc == 1)
{
printf("%d\n", sum);
return (0);
}
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
