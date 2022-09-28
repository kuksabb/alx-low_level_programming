#include "main.h"
/**
 * _pow_recursion - calculates the value of x to the power y
 * @x: base number
 * @y: power number
 * Return: result of x to power y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
