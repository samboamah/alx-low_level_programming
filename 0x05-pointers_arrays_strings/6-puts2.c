#include "main.h"

/**
 * puts2 - prints every character of a string
 *
 * @str: A pointer to an int that will be changed
 *
 * Return: no return
 */
void puts2(char *str)
{
	int s;

	for (s = 0; str[s] != '\0'; s++)
	{
		if (s % 2 == 0)
			_putchar (str[s]);
	}

	_putchar ('\n');
}
