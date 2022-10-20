#include <stdio.h>

/**
 * main - prints incoming infinite loop and avoided infinite loop
 * Return: 0 if successful
 */
int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	/**
	 * while (i < 10)
	 * {
	 *	putchar(i);
	 * }
	 */

	printf("Infinite loop avoided! \\0/\n");
	return (0);
}
