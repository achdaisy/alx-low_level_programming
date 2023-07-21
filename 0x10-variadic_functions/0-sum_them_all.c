#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns sum of its parameters
 * @n: number of parameters passed to the function
 * @...: variable of parameters to be used
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int index, sum = 0;
	va_list list;

	if (n == 0)
		return (0);
	va_start(list, n);
	for (index = 0; index < n ; index++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
