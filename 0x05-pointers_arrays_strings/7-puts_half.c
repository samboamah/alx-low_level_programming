#include "main.h"

/**
 * puts_half - print second half of a string
 *
 * @str: char array string type
 * Description: If odd number of chars, print (length - 1) / 2
 *
 * Return: no return
 */

void puts_half(char *str)
{
	int a, b;

	a = 0;
	while (str[a] != '\0')
		a++;

	b = (a + 1) / 2;

	for (a = b; str[a]; a++)
	{
		_putchar (str[a]);
	}

	_putchar ('\n');
}
