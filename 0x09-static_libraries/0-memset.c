#include "main.h"

/**
  * _memset - Fills first n bytes of memory area s
  * @s: memory area
  * @b: constant byte to be used in filling.
  * @n: number of bytes to be filled.
  *
  * Return: the memory area filled
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
