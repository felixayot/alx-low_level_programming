#include <stdio.h>
#include "main.h"
/**
 * print_chessboard - Function prototype
 * Description: prints the chessboard
 * @a: pointer to a 2d array
 * @a[8]: 2D char representing an 8x8 chessboard
 * Return: void
 */
#include <stdio.h>
void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
printf("%c ", a[i][j]);
}
printf("\n");
}
}
