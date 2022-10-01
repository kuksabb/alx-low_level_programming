#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiplies 2 numbers
 * @i: one of the numbers
 * @a: the other number
 * @result - result of multiplication
 * Return: result or 1 if it doesnt receive 2 arguments
*/
int main(int argc, char *argv[])
{
	int i, a;
	int result = i * a;

	if (argc > 1)
	{
		printf("%d\n", result);
	}
	else if (argc <= 1)
	{
		printf("Error\n");
	}
	return (1);
}

