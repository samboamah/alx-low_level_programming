#include "main.h"

#include "main.h"
/**
 * leet -  encodes a string into 1337.
 * @s: string to code
 * Return: the enconded string.
 */
char *leet(char *s)
{
	int a = 0, i;
	int lowercase[] = {97, 101, 111, 116, 108};
	int uppercase[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + a) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + a) == lowercase[i] || *(s + a) == uppercase[i])
			{
				*(s + a) = numbers[i];
				break;
			}
		}
		a++;
	}
	return (s);
}
