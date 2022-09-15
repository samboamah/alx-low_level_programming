#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from i to 98.
 *
 * @i: input number.
 *
 * Return: void.
 */
void print_to_98(int i)
{
	if (i > 98)
	{
		for (; i > 98; i--)
		{
			printf("%i, ", i);
		}
	}
	else if (i < 98)
	{
		for (; i < 98; i++)
		{
			printf("%i, ", i);
		}
	}
	printf("%i\n", i);
}
