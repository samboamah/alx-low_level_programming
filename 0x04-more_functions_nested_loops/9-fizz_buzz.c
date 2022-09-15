#include <stdio.h>

/**
 * main - Fizz-Buzz program.
 * prints numbers from 1 to 100,
 * multiples of 3 print Fizz
 * multiples of 5 print Buzz
 * multiples of 15 print Fizz Buzz
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%i ", i);
		}
	}
	printf("\n");
	return (0);
}
