#include <stdio.h>

void __attribute__((constructor)) my_function(void);

/**
 * my_function - prints out some text before main executed
 */

void my_function(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}	
