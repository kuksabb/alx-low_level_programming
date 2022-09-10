#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * followed by a new line
 * print all the letters except q and e
 * Return: 0 if success
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++); (ch != 'e'); (ch != 'q');
	{
		putchar (ch);
	}
	putchar('\n');
	return (0);
}
