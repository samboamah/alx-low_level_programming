#include "main.h"

/**
 * reverse_array -  function reverses the content of an array of integers.
 *
 * @a: array.
 * @n: number of elements of array.
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, k;

	i = 0;
	while (i < n)
	{
		n--;
		k = a[i];
		a[i] = a[n];
		a[n] = k;
		i++;
	}
}
