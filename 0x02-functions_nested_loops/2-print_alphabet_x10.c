#include "main.h"

/**
 * print_alphabet_x10 - print alphabets a to z,
 * ten times in lower case
 * Return: nothing if successful
 *
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{

		char alp;

		for (alp = 'a'; alp <= 'z'; alp++)

		{
			_putchar(alp);
		}

		_putchar('\n');

	}
}
