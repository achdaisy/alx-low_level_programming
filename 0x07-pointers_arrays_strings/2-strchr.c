#include "main.h"

/**
  * _strchr - locates a character in string
  * @s: string to be scanned.
  * @c: character to find
  *
  * Return: pointer to c in s ot NULL if not found.
  */
char *_strchr(char *s, char c)
{
	int i = 0, j;

	while (s[i])
	{
		i++;
	}

	for (j = 0; j <= i; j++)
	{
		if (c == s[j])
		{
			s += j;
			return (s);
		}
	}

	return ('\0');
}

