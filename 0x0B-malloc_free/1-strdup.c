#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 * containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 * Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *ch;
	int i, j = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		j++;

	ch = malloc(sizeof(char) * (j + 1));

	if (ch == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		ch[i] = str[i];

	ch[j] = '\0';

	return (ch);
}
