#include "main.h"

/**
 * set_bit - sets value of a bit to 1 ata  given index
 * @n: decimal number
 * @index: the given index
 *
 * Return: 1 if success and -1 incase of an error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
