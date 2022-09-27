#include <main.h>
/**
 * _memcpy - copies memory area
 * @n: number of bytes
 * @src: memory area to copy from
 * @dest: memory area to copy to
 * Return: a pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
