#include <stdio.h>
/**
  * main - Entry point
  * Description: This prints all possible combinations of two two-digit numbers
  * Return: 0 (Success)
  */
int main(void)
{
int i;
int j;
for (i = 0; i <= 99; i++)
{
for (j = i; j <= 99; j++)
{
int n1 = i / 10, n2 = i % 10, n3 = j / 10, n4 = j % 10;
putchar(n1 + '0');
putchar(n2 + '0');
putchar(' ');
putchar(n3 + '0');
putchar(n4 + '0');
if (i != 99 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
