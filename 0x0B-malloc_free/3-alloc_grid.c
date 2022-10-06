#include <stdlib.h>

/**
 * alloc_grid - Creates a 2 dimensional array of integers
 *
 * @width: Width/rows of the 2D array
 * @height: Height/columns of the 2D array
 *
 * Return: Pointer to a 2 dimenstional array of integers
 */

int **alloc_grid(int width, int height)
{
	int i, j, k, **mem;

	if (width <= 0 || height <= 0)
		return ('\0');

	mem = malloc(sizeof(int *) * height);

	if (mem == NULL)
	{
		free(mem);
		return ('\0');
	}

	for (i = 0; i < height; i++)
	{
		mem[i] = malloc(sizeof(int) * width);

		if (mem[i] == NULL)
		{
			for (k = i; k >= 0; k--)
				free(mem[f]);

			free(mem);
			return ('\0');
		}

		for (j = 0; j < width; j++)
			mem[i][j] = 0;
	}

	return (mem);
}
