#include <stdio.h>

/**
 * main - print lowercase alphabet in reverse order
 * Return: 0 if everything is in order
 */
int main(void)
{
	char alp;

	for (alp = 57; alp >= 48; --alp)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
