#include "main.h"

/**
 * _abs - produces absolute value of an integer
 *
 * @n: number is interger
 *
 * Return: always 0.
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n / -1);
	}
}
