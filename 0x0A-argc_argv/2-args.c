#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all arguments it receives.
 * @argc: Count of arguments passed
 * @argv: Array of argument strings
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
