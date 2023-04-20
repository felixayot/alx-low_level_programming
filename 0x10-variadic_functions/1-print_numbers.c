#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - Function prototype
 * Description: prints numbers
 * @separator: input pointer to a char
 * @n: input int
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list arg_list;
unsigned int i;
int x;
va_start(arg_list, n);
for (i = 0; i < n; i++)
{
x = va_arg(arg_list, int);
printf("%d", x);
if (i != n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(arg_list);
}
