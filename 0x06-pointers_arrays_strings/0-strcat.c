#include "main.h"

/**
 * _strcat - function concatenates two strings
 *
 * @src: pointer to source
 * @dest: pointer to destionation
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int line1;
	int line2;

	line1 = 0;
	while (dest[line1] != '\0')
	{
		line1++;
	}

	line2 = 0;
	while (src[line2] != '\0')
	{
		dest[line1] = src[line2];
		line1++;
		line2++;
	}
	dest[line1] = '\0';

	return (dest);
}

