#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: a pointer to an int
 *
 * Return: return sring length
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count])
		count++;
	return (count);
}
