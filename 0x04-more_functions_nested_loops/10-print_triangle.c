#include "main.h"
/**
 * print_triangle - return a triangle created using character
 * Use the character # to print the triangle
 * @size: size of the triangle
 * Return: if size is 0 or less, the function should print only a new line
 */
void print_triangle(int size)
{
	int hash, index;

	if (size > 0)
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (index = 0; index < hash; index++)
				_putchar('#');
			if (hash == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
