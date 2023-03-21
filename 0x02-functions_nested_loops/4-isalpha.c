#include "main.h"
/**
 * _isalpha - Entry point
 * Description: shows if the input is a letter, other cases show 0
 * @c: The char in ASCII table
 * Return: 1 for letters, 0 for the rest
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
}
return (0);
}
_putchar('\n');
}
