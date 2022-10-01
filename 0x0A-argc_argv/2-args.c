#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: total number of command line arguments.
 * @argv: array string that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
