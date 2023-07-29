#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

/**
 * struct my_types - A new struct type defining a printer.
 * @symbol: A symbol representing a data type.
 * @f: A function pointer to a function that prints
 *         a data type corresponding to symbol.
 */

typedef struct my_types
{
	char *symbol;
	void (*f)();
} types_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
char *make_nil(char *s);
void print_comma(int j, int x);
int count_format(const char * const format);

#endif
