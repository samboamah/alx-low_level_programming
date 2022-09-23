#include "main.h"

/**
 * rot13 - encodes a string using rot13
 *
 * @s: input string.
 *
 * Return: dest.
 */
char *rot13(char *s)
{
	int a = 0, i;
	char alphabets[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + a) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + a) == alphabets[i])
			{
				*(s + a) = rot13[i];
				break;
			}
		}
		a++;
	}
	return (s);
}
