#include "main.h"

/**
* factorial - finds the factorial of a number
*
* @n: integer
* Return: the factorial of the number
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (-1);
	n *= factorial(n - 1);
	return (n);
}
