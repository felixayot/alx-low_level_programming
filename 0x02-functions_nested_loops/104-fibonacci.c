#include <stdio.h>
/**
 * main - Entry point
 * Description: prints the 1st 98 Fibonacci nos,starting with 1 and 2
 * Return: 0 (Success)
 */
int main(void)
{
int i;
unsigned int a = 1, b = 2, c;
printf("%u, %u", a, b);
for (i = 2; i < 98; i++)
{
c = a + b;
printf(", %u", c);
a = b;
b = c;
}
printf("\n");
return (0);
}
