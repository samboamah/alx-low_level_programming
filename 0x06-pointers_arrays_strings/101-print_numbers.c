#innclude "main.h"

/**
 * print_number - Prints an integer.
 *
 * @n: The integer to print
 *
 * Return: no return
*/
void print_number(int n)
{
	unsigned int number = n;

	if (n < 0)
	{
		_putchar('-');
		number = -number;
	}
	if ((number / 10) > 0)
		print_number(number / 10);

	_putchar((number % 10) + '0');
}
