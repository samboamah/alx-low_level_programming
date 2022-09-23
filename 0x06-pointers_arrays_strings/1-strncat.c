#include "main.h"
#include <string.h>

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
	int a = strlen(dest);
	int i = 0;

	while (i < n && *src)
	{
		dest[a + i] = *src;
		src++;
		i++;
	}
	dest[a + i] = '\0';
	return (dest);
}
