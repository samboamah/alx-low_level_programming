#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: destination.
 * @src: source.
 *
 * @n: bytes used from src.
 *
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = strlen(dest);
	int i = 0;

	while (i < n && *src)
	{
		dest[index + i] = *src;
		src++;
		i++;
	}

	dest[index + i] = '\0';
	return (dest);
}
