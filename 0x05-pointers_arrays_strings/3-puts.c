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
	int lines = 0;

	while (str[lines])
	{
		_putchar(str[lines]);
		lines++;
	}
	_putchar('\n');
}
