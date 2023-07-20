#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array to be used in the program
 * @size: number of array elements
 * @cmp: pointer to function used for comparison
 *
 * Return: index of the first element for which
 * the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
		{
			return (index);
		}
	}
	return (-1);
}
