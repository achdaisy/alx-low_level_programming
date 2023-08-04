#include "main.h"

/**
 * flip_bits - returns bits(number) required to flip from one number to another
 * @n: the first number
 * @m: the number we are required to flip to
 *
 * Return: number of bit required for flipping
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long bits = 0, xor = n ^ m;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
