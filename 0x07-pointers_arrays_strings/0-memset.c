#include "main.h"
/**
 * _memset - funtion that fills memory with a constant byte
 * @n: number of bytes
 * @s: pointer
 * @b: constant byte
 * Return: s, pointer to the memory area
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
return (s);
}
