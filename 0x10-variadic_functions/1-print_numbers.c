#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: string to be printed btwn numbers
 * @n: number of integers passed to the function
 * @...: list of numbers to be printed
 *
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list list;

	va_start(list, n);
	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(list, int));
		if (separator != NULL && index < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}

