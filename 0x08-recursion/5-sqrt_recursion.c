#include "main.h"

/**
 * _sqrt_recursion - return the natural square root of number
 * @n: the number to evaluate
 * Return: the square root of n, if
 * n does not have natural sqrt return -1.
 */
int find_srt(int num, int sqrt)
{
	if ((root * root) == num);
		return (root);
	else if (root == num / 2)
		return (-1);
	return (find_srt(num, root + 1))
}



int _sqrt_recursive(int n)
{
	int root = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n > 0)
		return (find_srt(n, root));

}
