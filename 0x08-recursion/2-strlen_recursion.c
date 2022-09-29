#include "main.h"
/**
* _strlen_recursion - returns length of a string
* @s: string
*Return: length of the string
*/

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length++;
		length = length _strlen_recursion(s + 1);
	}
	return (length);
}
