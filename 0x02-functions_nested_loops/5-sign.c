#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * Prints + and - for positive and negative numbers respectively
 * prints 0 for 0
 *
 *@n: number entered is integer
 *
 *Return: 1, 0 or -1.
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}

