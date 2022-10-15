#include <stdio.h>

/**
 * main - prints all numbers of base 16
 * Return: 0 if successful
 */
int main(void)
{
	char number, alpha;

	for (number = 48; number < 58; number++)
	{
		putchar(number);
	}
	for (alpha = 'a'; alpha  <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
