#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - pointer to a duplicate string
 * @str: string to be duplicated
 * return: pointer to the duplicate string, null if string is empty or insuffient memory
*/
char *_strdup(char *str)
{
	char *strnew = NULL;
	unsigned int i;
	int n;

	if (str == NULL)
		return (NULL);
	for (n = 0; str[n] != '\0'; i++)
		strnew = (char *)malloc(n + 1 * sizeof(char));
	if (strnew != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			strnew[i] = str[i];
	}
	else
	{
		return (NULL);
	}
	strnew[i] = '\0';
	return (strnew);
}
