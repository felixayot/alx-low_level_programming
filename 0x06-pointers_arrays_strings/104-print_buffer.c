#include "main.h"
#include <stdio.h>
/**
 * print_ascii - function
 * Description: determines printable ASCII char
 * @n: input value as int
 * Return: result
 */
int print_ascii(int n)
{
return (n >= 32 && n <= 126);
}
/**
* print_hexadec - function
* Description: prints hexadecimal values for string b in formatted form
* @b: input pointer
* @st: input as int
* @en: input as int
*/
void print_hexadec(char *b, int st, int en)
{
int i = 0;
while (i < 10)
{
if (i < en)
printf("%02x", *(b + st + i));
else
printf("  ");
if (i % 2)
printf(" ");
i++;
}
}
/**
 * prints_ascii - function
 * Description: prints ascii values for string b
 * @b: input pointer
 * @st: input as int
 * @en: input as int
 */
void prints_ascii(char *b, int st, int en)
{
int ch, i = 0;
while (i < en)
{
ch = *(b + i + st);
if (!print_ascii(ch))
ch = 46;
printf("%c", ch);
i++;
}
}
/**
 * print_buffer - main function
 * Description: prints a buffer
 * @b: input pointer
 * @size: input size as an int
 * Return: void
 */
void print_buffer(char *b, int size)
{
int st, en;
if (size > 0)
{
for (st = 0; st < size; st += 10)
{
en = (size - st < 10) ? size - st : 10;
printf("%08x: ", st);
print_hexadec(b, st, en);
prints_ascii(b, st, en);
printf("\n");
}
}
else
printf("\n");
}
