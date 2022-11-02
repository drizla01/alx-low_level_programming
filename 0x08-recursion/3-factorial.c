#include "main.h"

/**
 * factorial - return the factorial of a number
 * @n: contains the number
 * Return: if n is less than 0 return -1,
 * factorial of 0 is 1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
