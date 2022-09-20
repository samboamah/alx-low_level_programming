#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @a: integer
 * @b: other integer
 *
 * return: no return
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
