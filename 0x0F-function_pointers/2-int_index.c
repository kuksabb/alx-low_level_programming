#include "function_pointers.h"
/**
 * int_index - entry pointof function
 * @size: number of elements in array
 * @cmp: pointer to compare values
 * @array: an array
 * Return: -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int sz;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (sz = 0; sz < size; sz++)
	{
		if (cmp(array[sz]) != 0)
			return (sz);
	}
	return (-1);
}
