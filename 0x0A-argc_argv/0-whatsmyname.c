#include "main.h"
#include <stdlib.h>
/**
 * main - a program that prints its name
 * followed by a new line
 * Return: 0
*/
int mynameis(int argc, char *argv[])
{
	int i;

	for(i = 0;i < argc, i++)
	{
		mynameis("%s\n", argv[i]);
	}
}
