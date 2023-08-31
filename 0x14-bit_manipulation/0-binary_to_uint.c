#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: the binary number to be converted
 *
 * Return: converted number, else 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int converted_no = 0, pow = 1;
	int i, len = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		converted_no += (b[i] - '0') * pow;
		pow *= 2;
	}
	return (converted_no);
}
