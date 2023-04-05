#include "main.h"
/**
 * is_prime_recursive - Helper function
 * Description: det if the input integer is a prime number
 * @n: input int
 * @i: input int
 * Return: 1 (int is prime factor) else 0
 */
int is_prime_recursive(int n, int i)
{
if (n < 2)
{
return (0);
}
else if (i == n)
{
return (1);
}
else if (n % i == 0)
{
return (0);
}
else
{
return (is_prime_recursive(n, i + 1));
}
}
/**
 * is_prime_number - Main function caller
 * @n: input int
 * Description: calls is_prime_recursive with the initial value of i
 * Return: int value
 */
int is_prime_number(int n)
{
return (is_prime_recursive(n, 2));
}
