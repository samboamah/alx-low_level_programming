#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: number of command line arguments.
 * @argv: array string to contain program command line arguments.
 * Return: 0 - success. 1 on fail.
 */
int main(int argc, char *argv[])
{
	int i = atoi(argv[1]);
	int j = atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", i * j);
	return (0);
}
