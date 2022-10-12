#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: input integer array.
 * @size: array size
 * @cmp: pointer to function being used to compare values.
 *
 * Return: index of the first eement for which the cmp
 * function does not return 0.
 * If no element matches, return -1.
 * If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (count = 0; count < size; count++)
			if (cmp(array[count]))
				return (count);
	}

	return (-1);
}
