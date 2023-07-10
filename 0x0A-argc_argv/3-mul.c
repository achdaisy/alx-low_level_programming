#include <stdio.h>
#include <stdlib.h>
/**
* main - prints multiplication result of two numbers.
*@argc: number of arguments
*@argv: array of arguments
*Return: returns 0
*/

int main(int argc, char *argv[])
{
	int x, y, resultl;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	resultl = x * y;

	printf("%d\n", resultl);
	return (0);
}
