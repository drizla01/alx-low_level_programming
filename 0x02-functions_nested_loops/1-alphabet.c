#include "main.h"

/**
 * main - print lower case letter
 * Return: 0 if successful
 */
void print_alphabet(void)
{
	char alp;
	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');
}
