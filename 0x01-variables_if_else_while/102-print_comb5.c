#include <stdio.h>

/**
 * main - combination of two two-digit numbers
 * Return: 0 if successfully executed
 */

int main(void)
{
	int a, b;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			if (a <= b)
			{
				putchar(a);
				putchar(b);
				if (b > a)
				{
					putchar(' ');
					putchar(a);
					putchar(b);
					if (a != 57 || b != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
