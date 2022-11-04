#include "main.h"

/**
 * is_divisible - checks if the number is divisible
 * @num: the number to be checked
 * @div: the divisor
 * Return: 1 if its deivisible or 0 otherwise
 */

int is_divisible(int num, int div)
{
	if ((num % div) == 0)
		return (0);
	if (div == (num / 2))
		return (1);
	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - return 1 if the integer is a prime number
 * @n: the inputed integer
 * Return: the returned integer value 1 if true, 0 otherwise
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, div));
}
