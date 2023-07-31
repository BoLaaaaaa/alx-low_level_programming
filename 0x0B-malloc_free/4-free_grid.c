#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional grid previously created by alloc_grid.
 * @grid: The 2-dimensional array to be freed
 * @height: The height of the array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL)
return;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
