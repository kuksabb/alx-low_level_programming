#include "main.h"

/**
 *  main - prints alphabets in lowercase
 *  followed by a newline
 *  Returns: 0
*/
void print_alphabet(void)
{
	char ch;
	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
