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
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[count]);
		count++;
	}
}
