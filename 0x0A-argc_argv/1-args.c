#include <stdio.h>
/**
 * main - Entry point
 * Description: prints the number of arguments passed into it
 * @argc: count of arguments passed
 * @argv: array of argument strings
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
