#include "main.h"

/**
 * print_line - draws a straightline in the terminal
 *
 * @n: integer
 * Return: value
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar ('_');
	}
	_putchar('\n');
}
