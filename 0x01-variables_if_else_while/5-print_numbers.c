#include <stdio.h>

/**
 * main - print all single digit
 * Return: 0 if successful
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
		printf("%d", digit);
	putchar('\n');
	return (0);
}
