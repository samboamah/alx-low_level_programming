#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 *
 * @n: integer
 *
 * Return: last digit value
 */
int print_last_digit(int n)
{
	int d = n % 10;
	if (d < 0)
	{
		_putchar(-d + '0');
		return (-d);
	}
	else
	{
		_putchar(d + '0');
		return (d);
	}
}
