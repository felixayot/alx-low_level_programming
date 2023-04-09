#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: print the product of two ints passed
 * @argc: Count of arguments passed
 * @argv: Array of argument strings
 * Return: 0 (Success) 1 (Error)
 */
int main(int argc, char *argv[])
{
int i, j;
if (argc == 3)
{
i = atoi(argv[1]);
j = atoi(argv[2]);
printf("%d\n", i *j);
return (0);
}
else
printf("Error\n");
return (1);
}
