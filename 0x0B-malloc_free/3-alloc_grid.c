#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Function prototype
 * Description: returns a pointer to a 2 dimensional array of integers
 * @width: input int
 * @height: input int
 * Return: pointer to a 2D array (Sucess) or NULL (failure)
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;
if (width <= 0 || height <= 0)
{
return (NULL);
}
grid = (int **)malloc(height * sizeof(int *));
if (grid == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
grid[i] = (int *)malloc(width * sizeof(int));
if (grid[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(grid[j]);
}
free(grid);
return (NULL);
}
}
return (grid);
}
