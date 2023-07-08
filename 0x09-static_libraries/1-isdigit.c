#include "main.h"

/**
  * _isdigit - checks for a digit (0 through 9).
  * @c: function parameter.
  *
  * Return: 1 for a character that will be a digit or 0 otherwise
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
