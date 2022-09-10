#include <stdio.h>

/**
 * main - prints all possible combo of single-digit numbers
 * followed by a new line
 * Return: 0 if success
*/
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar (i);
		if (i != 57)
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar('\n');
	return (0);
}
