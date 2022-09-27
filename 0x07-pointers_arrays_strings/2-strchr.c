#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @c: character to find
 * @s: string in which to find character
 * Return: a pointer to first occurence of c
 * NULL if c not found
*/
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
