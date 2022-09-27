#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: pointer to char destination
 * @src: pointer to char source
 * @n: size
 *
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
