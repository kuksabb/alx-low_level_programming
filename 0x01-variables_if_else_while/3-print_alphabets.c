#include <stdio.h>

/**
 * main - prints te alphabet in lowercase
 * and then in uppercase
 * followed by a new line
 * Return: 0 if success
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar (ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar (ch);
	}
	putchar('\n');
	return (0);
}
