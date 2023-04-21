#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: prints the opcodes of its own main function.
 * @argc: arguments count
 * @argv: argument strings
 * Return: 0 (Success) 1 or 2 (failure)
 */
int main(int argc, char *argv[])
{
int num_bytes;
int i;
unsigned char *ptr;
if (argc != 2)
{
printf("Error\n");
return (1);
}
num_bytes = atoi(argv[1]);
if (num_bytes < 0)
{
printf("Error\n");
return (2);
}
ptr = (unsigned char *) main;
for (i = 0; i < num_bytes; i++)
{
printf("%02x ", *(ptr + i));
}
printf("\n");
return (0);
}
