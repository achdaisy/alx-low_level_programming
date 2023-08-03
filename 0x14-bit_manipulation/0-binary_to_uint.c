#include "main.h"

/**
 * binary_to_uint - converts binary number to an unsigned int
 * @b: strings of 0s and 1s
 *
 * Return: The converted number, or 0 otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, base = 1;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
	if (b[len] != '0' && b[len] != '1')
		return (0);

	result += (b[len] - '0') * base;
	base *= 2;
	}
	return (result);
}
