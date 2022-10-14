#include <stdio.h>

/**
 * main - prints single digit from 1 to 9,
 * Return: 0 if sucessful
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
