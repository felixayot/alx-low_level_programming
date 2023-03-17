#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that prints lowercase then uppercase alphabets
 * Return: 0 (Success)
 */
int main(void)
{
int x = 97;
int y = 65;
while (x <= 122)
{
putchar(x);
x++;
}
while (y <= 90)
{
putchar(y);
y++;
}
putchar('\n');
return (0);
}
