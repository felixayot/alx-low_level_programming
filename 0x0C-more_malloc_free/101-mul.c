#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_error - Function prototype
 * Description: prints an error message and exits with a status of 98.
 * Return: void
 */
void print_error(void)
{
printf("Error\n");
exit(98);
}
/**
 * check_digits - Function prototype
 * Description: checks if a string is composed of only digits.
 * If not, it calls print_error
 * @str: input char string
 * Return: void
 */
void check_digits(char *str)
{
int i;
i = 0;
while (str[i] != '\0')
{
if (str[i] < '0' || str[i] > '9')
{
print_error();
}
i++;
}
}
/**
 * multiply - Function prototype
 * Description: returns their product as an integer
 * @num1: input pointer
 * @num2: input pointer
 * Return: product
 */
int multiply(char *num1, char *num2)
{
int len1, len2, *result;
int j, carry, temp;
int i, product, comm;
len1 = strlen(num1);
len2 = strlen(num2);
result = calloc(len1 + len2, sizeof(int));
if (result == NULL)
{
print_error();
}
for (i = len1 - 1; i >= 0; i--)
{
carry = 0;
for (j = len2 - 1; j >= 0; j--)
{
temp = (num1[i] - '0') * (num2[j] - '0') + carry + result[i + j + 1];
result[i + j + 1] = temp % 10;
carry = temp / 10;
}
result[i + j + 1] = carry;
}
comm = 0;
while (result[comm] == 0 && comm < len1 + len2 - 1)
{
comm++;
}
product = 0;
for (i = comm; i < len1 + len2; i++)
{
product = product * 10 + result[i];
}
free(result);
return (product);
}
/**
 * main - check Function
 * Description: checks accuracy
 * @argc: input argument count
 * @argv: input argument string
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
int product;
if (argc != 3)
{
print_error();
}
check_digits(argv[1]);
check_digits(argv[2]);
product = multiply(argv[1], argv[2]);
printf("%d\n", product);
return (0);
}
