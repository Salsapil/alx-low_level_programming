#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - function
 * @grid: check input
 * @height: check input
 * Return: void
*/
void free_grid(int **grid, int height)
{
int i;
i = 0;
while (i < height)
{
free(grid[i]);
i++;
}
free(grid);
}
