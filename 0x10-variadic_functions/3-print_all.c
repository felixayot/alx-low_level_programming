#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - Function prototype
 * Description: prints anything.
 * @format: input pointer to char
 * Return: void
 */
void print_all(const char * const format, ...)
{
va_list args;
const char *p = format;
int i_val;
double d_val;
char *s_val;
char c_val;
int first = 1;
va_start(args, format);
while (*p)
{
if (!first && (*(p - 1) == 'c' || *(p - 1) == 'i' || *(p - 1) == 'f' || *(p - 1) == 's'))
{
printf(", ");
}
first = 0;
switch (*p)
{
case 'c':
c_val = va_arg(args, int);
printf("%c", c_val);
break;
case 'i':
i_val = va_arg(args, int);
printf("%d", i_val);
break;
case 'f':
d_val = va_arg(args, double);
printf("%f", d_val);
break;
case 's':
s_val = va_arg(args, char *);
if (s_val == NULL)
{
printf("(nil)");
}
else
{
printf("%s", s_val);
}
break;
default:
break;
}
p++;
}
printf("\n");
va_end(args);
}
