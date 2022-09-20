#include "main.h"

/**
 * _puts - prints a string, with a new line to stdout
 *
 * @str: pointer to string to print
 *
 * Return: no return
 */
void _puts(char *str)
{
	int new = 0;

	while (str[new])
	{
		_putchar(str[new]);
		new++;
	}
_putchar('\n');
}


