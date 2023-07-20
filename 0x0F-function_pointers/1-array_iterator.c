#include "function_pointers.h"

/**
 * array_iterator - Executes action on each array element
 * @array: the array taken as input
 * @size: size of the array
 * @action: pointer to function used
 *
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL || action != NULL)
	{
		while (size-- > 0)
		{
			action(*array);
			array++;
		}
		return;
	}
}
