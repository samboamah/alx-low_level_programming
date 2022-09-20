#include "holberton.h"

/**
 * _strcpy -  copies the string pointed to by src
 *
 * @dest: char type string
 * @src: char type string
 *
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{

	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
