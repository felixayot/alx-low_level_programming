#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Function prototype
 * Description: frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * @grid: input int
 * @height: input int
 * Return: free grid mem if NULL return
 */
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL)
{
return;
}
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
