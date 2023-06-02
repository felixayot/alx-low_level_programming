#include <stdio.h>
/**
 * main - Entry point
 * Description: This prints all possible different combinations of 3 dgts
 * Return: 0 (Success)
 */
int main(void)
{
int c;
int d;
int e = 0;
while (e < 10)
{
d = 0;
while (d < 10)
{
c = 0;
while (c < 10)
{
if (c != d && d != e && e < d && d < c)
{
putchar('0' + e);
putchar('0' + d);
if (c + d + e != 9 + 8 + 7)
{
putchar(',');
putchar(' ');
}
}
c++;
}
d++;
}
e++;
}
putchar('\n');
return (0);
}
