#include "main.h"

/**
 * print_alphabet - Prints alpahbet in lowercase
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int j;

	for (j = a; j <= z; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
