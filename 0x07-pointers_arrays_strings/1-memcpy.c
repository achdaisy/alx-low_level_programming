#include "main.h"

/**
  * _memcpy - copies the memory area from src to dest
  * @dest: pointer to the destination array
  * @src: pointer to source
  * @n: number of bytes to be copied.
  *
  * Return: Returns a pointer to dest.
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

