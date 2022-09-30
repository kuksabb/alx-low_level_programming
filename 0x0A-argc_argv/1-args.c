#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the number of arguments passed into it
 * @argc: count of number of arguments passed
 * @argv: list of arguments
 * Return: 0
*/
int main(int argc, char *argv[])
{
	if (argc > 1)
	printf("%d\n", argc);
}
