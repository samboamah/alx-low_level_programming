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
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
