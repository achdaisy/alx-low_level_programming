#include "main.h"

/**
 * _pow_recursion - returns x power y
 * @x: the number
 * @y: the exponent
 *
 * Return: -1 if y<0, and 1 if y == 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (_pow_recursion(x, y - 1) * x);
}
