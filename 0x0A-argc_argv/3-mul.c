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
	int a = 0, b = 0;
	
	if (argc > 2)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
