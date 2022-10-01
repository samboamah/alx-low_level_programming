#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */
int main(void)
{
	long int pn, n = 612852475143;

	for (pn = 2; pn <= n; pn++)
	{
		if (n % pn == 0)
		{
			n = n / pn;
			pn--;
		}
	}
	printf("%ld\n", pn);
	return (0);
}
