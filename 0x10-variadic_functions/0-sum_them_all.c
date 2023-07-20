#include <stdarg.h>
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
	va_list parameter_list;
	unsigned int index, sum = 0;

	va_start(parameter_list, n);
	for (index = 0; index < n ; index++)
	{
		sum += va_arg(parameter_list, int);
	}
	va_end(parameter_list);
	return (sum);
}
