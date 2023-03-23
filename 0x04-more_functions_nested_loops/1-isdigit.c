#include "main.h"
/**
 * _isdigit - Entry point
 * Description: checks for a digit (0 through 9)
 * @c: input value as a char
 * Return: 1 if is a digit and 0 if otherwise
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
