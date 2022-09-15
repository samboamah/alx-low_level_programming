#include "main.h"

/**
 * times_table - prints the 9 times table starting from 0.
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, i_j;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		for (j = 1; j < 10; j++)
		{
			i_j = i * j;
			_putchar(',');
			_putchar(' ');
			if (i_j < 10)
			{
				_putchar(' ');
				_putchar(i_j + '0');
			}
			else
			{
				_putchar((i_j / 10) + '0');
				_putchar((i_j % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
