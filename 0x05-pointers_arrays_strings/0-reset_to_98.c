#include "main.h"

/**
 *reset_to_98 -  updates the value pointed to, to 98.
 *@p: pointer to the n parameter.
 *
 * Return: Always 0.
 */

void reset_to_98(int *p)
{
	int n = 5;

	p =  &n;
	*p =  98;
}

