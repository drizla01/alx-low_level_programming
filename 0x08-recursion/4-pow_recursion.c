#include "main.h"

/**
 * _pow_recursion - return value of x raised to the power of y.
 * @x: the base integer
 * @y: the power
 * Return: the recursive solution, if y is lower than 0, return -1
 */
int _pow_recursion(int x, int y)
{
	int res = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y > 0)
	{
		res *= _pow_recursion(x, y - 1);
	}
	return (res);
}
