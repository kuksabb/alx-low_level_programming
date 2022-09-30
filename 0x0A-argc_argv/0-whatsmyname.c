#include "main.h"
#include <stdlib.h>
/**
 * main - a program that prints its name
 * @argc: argument count
 * @argv: argument value
 * Return: 0
*/
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		_putchar("%s\n", argv[0]);
	}
	return (0);
}
