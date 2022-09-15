#include "main.h"

/**
 * print_diagonal - draws diagonal line on the terminal
 *
 * @n: number of times \ is printed
 *
 * Return: no return
 */
void print_diagonal(int n)
{
	int i;
	int j = 0;

	if (j > 0)
	{
		while (j < n)
		{
			for (i = 0; i < n; i++)
			{
				_putchar(' ');
				_putchar(92);
				_putchar('\n');
			}
		j++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
