#include "main.h"

/**
 * flip_bits - returns no of bits needed to flip to another no
 * @n: first number
 * @m: second number
 *
 * Return: no of bits required to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
