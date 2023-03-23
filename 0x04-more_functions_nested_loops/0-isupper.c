#include "main.h"
/**
 * _isupper - Entry point
 * Description: This checks for uppercase char
 * @c: input value for char
 * Return: 1 if uppercase and 0 for otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
