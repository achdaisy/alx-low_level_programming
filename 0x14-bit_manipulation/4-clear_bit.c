#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at the given index
 * @n: the decimal number
 * @index: the given index
 *
 * Return: 1 if success and -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);

	return (1);
}
