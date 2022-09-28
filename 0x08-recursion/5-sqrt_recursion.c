#include "main.h"
/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: number to find its square root
 * Return: natural square root of n
*/
int _sqrt_recursion(int n)
{
	int m;

	n = m * m;

	if (m * m != n)
	{
		return (-1);
	}
	_sqrt_recursion(n, 1, m);
	return (m);
}
