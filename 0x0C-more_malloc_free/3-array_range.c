#include <stdlib.h>
#include "main.h"

/**
* array_range - creates an array of integers
* @min: smallest number in the array
* @max: lagrest value in the array
*
* Return: pointer to the address of the memory block
*/

int *array_range(int min, int max)
{
	int *pointer;
	int i, j = 0;

	if (min > max)
		return (NULL);
	pointer = malloc(sizeof(*pointer) * ((max - min) + 1));
	if (pointer != NULL)
	{
		for (i = min; i <= max; i++)
		{
			pointer[j] = i;
			j++;
		}
		return (pointer);
	}
	else
		return (NULL);

}
