#include <stdio.h>

/**
 * main - prints single digit from 1 to 9,
 * Return: 0 if sucessful
 */
int main(void)
{
	int digit;

	for (digit = 48;digit < 58; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
