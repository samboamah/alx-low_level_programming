#include "main.h"

/**
 * print_square - prints a square, followed by new line
 *
 * @size: size of square
 *
 * Return: no return
 */
void print_square(int size)
{
	int rows, columns;

	for (rows = 0; rows < size; rows++)
	{
		for (columns = 0; columns < size; columns++)
		{
			_putchar('#');
		}
		if (rows != size - 1)
		{
			_putchar('\n');
		}
	}
	_putchar(10);
}
