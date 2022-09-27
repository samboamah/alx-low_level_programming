#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints sums of the two diagonals
 * of a square matrices
 *
 * @a: input pointer
 * @size: size of matrix
 * Return: no return
 */
void print_diagsums(int *a, int size)
{
	int i, diag1 = 0, diag2 = 0;

	for (i = 0; i < size; i++)
	{
		diag1 += *(a + (size * i + i));
		diag2 += *(a + (size * i + size - 1 - i));
	}
	printf("%d, %d\n", diag1, diag2);

}
