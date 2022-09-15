#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: characters in ASCII
 *
 * Return: 1 if c is a letter, lowercase or uppercase. others 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
