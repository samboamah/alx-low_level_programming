#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char i;
	int a = 0;

	for (a < 10; a++;)
	{
	for (i = 'a'; i <= 'z'; i++)

		_putchar(i);
	}
	_putchar('\n');
}
