#include "main.h"

/**
 * print_line - return the length of a line
 * @n: variable to store the value
 * Return: the line
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');

	}
	_putchar('\n');
}

