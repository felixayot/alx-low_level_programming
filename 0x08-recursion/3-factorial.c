#include "main.h"
/**
 * factorial - Function prototype
 * Description: returns the factorial of a given number
 * @n: input int
 * Return: -1 (If n is lower than 0-Error) 0 (Factorial of 0)
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
