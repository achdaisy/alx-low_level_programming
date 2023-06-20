#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @num: function argument.
 *
 * return: returns the absolute value.
 */
int _abs(int num)
{
	if (num < 0)
	{
		int abs_value;

		abs_value = num * -1;
		return (abs_value);
	}
	return (num);
}

