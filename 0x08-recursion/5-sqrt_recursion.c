#include "main.h"
/**
 * sqrt_recursive - helper function
 * Description: det the middle point of a binary search range
 * @n: input int
 * @m: input int as the lower bound
 * @p: input int as the upper bound
 * Return: int value
 */
int sqrt_recursive(int n, int m, int p)
{
int mp;
if (m > p)
{
return (-1);
}
mp = m + (p - m) / 2;
if (mp *mp == n)
{
return (mp);
}
else if (mp *mp > n)
{
return (sqrt_recursive(n, m, mp - 1));
}
else
{
return (sqrt_recursive(n, mp + 1, p));
}
}
/**
 * _sqrt_recursion - main function
 * Description: returns the natural square root of a number
 * @n: input int
 * Return: -1 (sqrt not natural-Error) or n (sqrt of 0 or 1)
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (n);
}
else
{
return (sqrt_recursive(n, 1, n / 2));
}
}
