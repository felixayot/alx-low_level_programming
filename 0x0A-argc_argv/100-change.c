#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: prints the minimum number of
 * coins to make change for an amount of money.
 * @argc: Count of arguments passed
 * @argv: Array of argument strings
 * Return: 0 (Success) 1 (Error)
 */
int main(int argc, char *argv[])
{
int cents;
int num_quarters;
int num_dimes;
int num_nickels;
int num_twopennies;
int num_penny;
int num_coins;
if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
return (0);
}
num_quarters = cents / 25;
cents = cents % 25;
num_dimes = cents / 10;
cents = cents % 10;
num_nickels = cents / 5;
cents = cents % 5;
num_twopennies = cents / 2;
cents = cents % 2;
num_penny = cents;
num_coins = num_quarters + num_dimes +
num_nickels + num_twopennies + num_penny;
printf("%d\n", num_coins);
return (0);
}
