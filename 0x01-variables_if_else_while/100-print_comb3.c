#include <stdio.h>
/**
  * main - Entry point
  * Description: This prints all possible different combinations of two digits
  * Return: 0 (Success)
  */
int main(void)
{
int x;
int y = 0;
while (y < 10)
{
x = 0;
while (x < 10)
{
if (y != x && y < x)
{
putchar('0' + y);
putchar('0' + x);
if (x + y != 17)
{
putchar(',');
putchar(' ');
}
}
x++;
}
y++;
}
putchar('\n');
return (0);
}
