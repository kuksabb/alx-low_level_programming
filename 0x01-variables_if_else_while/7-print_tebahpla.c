#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * in reverse order
 * followed by a new line
 * Return: 0 if success
*/
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar (ch);
	}
	putchar('\n');
	return (0);
}
