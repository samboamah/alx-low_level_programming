#include "holberton.h"

/**
 * print_rev - prints reversed string, then a new line
 *
 * @s: pointer to string to print
 *
 * Return: no return
*/
void print_rev(char *s)
{
	int c = 0;

	while (s[c])
		c++;
	while (c--)
		_putchar(s[c]);
	_putchar('\n');

}
