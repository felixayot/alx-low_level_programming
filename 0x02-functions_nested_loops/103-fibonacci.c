#include <stdio.h>
/**
 * main - Entry point
 * Description: finds and prints the sum of the even-valued terms
 * Return: 0 (Success)
 */
int main(void)
{
int limit = 4000000;
int sum = 0;
int a = 1;
int b = 2;
while (b <= limit)
{
int next_term = a + b;
if (b % 2 == 0)
{
sum += b;
}
a = b;
b = next_term;
}
printf("%d\n", sum);
return (0);
}
