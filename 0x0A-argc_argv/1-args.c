#include <stdio.h>
/**
 * main - program that prints the number of arguments passed into it
 * @argc: count of number of arguments passed
 * @argv: list of arguments
 * Return: 0
*/
int main(int argc, char __attribute__((unsed)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
