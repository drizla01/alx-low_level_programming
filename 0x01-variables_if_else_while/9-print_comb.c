#include <stdio.h>

/**
 * main - combination of single digits
 * Return: = if successfully executed
 */
int main(void)
{
	char digit;

	for (digit = 48; digit <= 57; digit++)
	{
		putchar(digit);
		if (digit != 57)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
