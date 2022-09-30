#include "main.h"
#include <stdlib.h>
/**
 * mynameis - a program that prints its name
 * @argc: argument count
 * @argv: argument value
 * Return: 0
*/
void main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		_putchar("%s\n", argv[i]);
	}
}
