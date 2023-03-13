#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - that returns a pointer to a 2D array of integers
 * @width: input 1
 * @height: input 2
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **n;
	int x;
	int y;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	n = malloc(sizeof(int *) * height);

	if (n == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		n[x] = malloc(sizeof(int) * width);
		if (n[x] == NULL)
		{
			for (; x >= 0; x--)
				free(n[x]);
			free(n);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			n[x][y] = 0;
	}
	return (n);
}
