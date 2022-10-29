#include "main.h"

/**
 * print_last_digit - last digit digit of a number
 * @n: last digit from the entire number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
	{
		n = -n;

		a = n % 10;
	}
	else if (n >= 0)

		a = n % 10;

	_putchar(a + '0');

	return (a);
}
