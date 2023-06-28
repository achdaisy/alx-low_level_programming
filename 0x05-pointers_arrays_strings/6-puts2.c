#include "main.h"
/**
 * puts2 - Prints out every other char of the string.
 * @str: input string to print.
 *
 * Return: returns void.
 */
void puts2(char *str)
{
	int i;

	for (; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
