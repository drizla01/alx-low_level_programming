#include "main.h"

int find_srt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_srt - return the square root
 * @root: the root of the number
 * @num: the inputted number
 * Return: square root if the number is a perfect square,
 * otherwise return -1
 */

int find_srt(int num, int root)
{
	if ((root * root) == num)
	{
		return (root);
	}
	else if ((root / 2) == num )
	{
		return (-1);
	}

	return (find_srt(num, (root + 1)));
}

/**
 * _sqrt_recursion - return the natural square root of number
 * @n: the number to evaluate
 * find_srt - return the square root
 * Return: the square root of n, if
 * n does not have natural sqrt return -1.
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (find_srt(n, root));

}
