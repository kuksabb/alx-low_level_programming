#include <stdio.h>

/**
 * main - prints all the numbers of base 16
 * followed by a new line
 * Return: 0 if success
*/
int main(void)
{
	int i;
	char ch;

	for (i = 48; i < 58; i++)
	{
		putchar (i);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar (ch);
	}
	putchar('\n');
	return (0);
}
