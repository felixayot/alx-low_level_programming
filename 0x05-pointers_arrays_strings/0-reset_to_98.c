#include "main.h"
#include <stdio.h>
/**
 * reset_to_98 - Entry point
 * Description: takes a pointer to an int
 * @n: input number as a pointer
 * Return: void
 */
void reset_to_98(int *n)
{
*n = 98;
}

int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    return (0);
}