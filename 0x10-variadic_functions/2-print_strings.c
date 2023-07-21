#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: string printed between strings
 * @n: number of strings
 * @...: other strings
 *
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	char *container;
	va_list list;

	va_start(list, n);
	for (index = 0; index < n ; index++)
	{
		container = va_arg(list, char *);
		(container) ? printf("%s", container) : printf("(nil)");
		if (separator != NULL && index < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
