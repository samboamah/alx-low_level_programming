#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change for an amount.
 * @argc: number of command line arguments.
 * @argv: array string that contains the program command line arguments.
 * Return: 0 - success. 1 on fail.
 */
int main(int argc, char *argv[])
{
	int coins = 0;

	if (argc == 2)
	{
		int cents = atoi(argv[1]);

		while (cents > 0)
		{
			if (cents >= 25)
				cents -= 25;
			else if (cents >= 10)
				cents -= 10;
			else if (cents >= 5)
				cents -= 5;
			else if (cents >= 2)
				cents -= 2;
			else if (cents >= 1)
				cents -= 1;
			coins++;
		}
		printf("%d\n", coins);
		return (0);
	}
	{
		printf("Error\n");
		return (1);
	}
}
