#include "main.h"

/**
 * 3-puts.c - prints a string, followed by a new line, to stdout.
 * @str: the string to be printed.
 *
 * Return: void.
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
