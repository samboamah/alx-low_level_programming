#include "main.h"

/**
 * print_triangle - prints a triangle followed by new line
 *
 * @size: size of tirangle
 *
 * Return: no return
 */
void print_triangle(int size)
{
	int a;
	int b;

	for (a = 0; a < size; a++)
	{
		for (b = 1; b < (size - a); b++)
		{
			_putchar(32);
		}
		for (b--; b < size; b++)
		{
			_putchar('#');
		}
		if (a < (size - 1))
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
