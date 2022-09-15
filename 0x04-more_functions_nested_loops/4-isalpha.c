#include "main.h"

/**
 * print_most_numbers - prints numbes 0 to 9 but not 2 and 4
 *
 * Return: always 0
 */
void print_most_numbers(void)
{
	int i, j;

	for (i = '0'; i <= '2'; i++)
	{
		_putchar(i);
	}
	for (j = '3'; j <= '9'; j++)
	{
		_putchar(j);
	}
	_putchar ('\n');
}

