#include "main.h"

/**
 * more_numbers - prints number from 0 to 14 10times
 * Return: nothing
 */
void more_numbers(void)
{
	int i, num;

	i = 0;
	while (i < 10)
	{
		for (num = 0; num < 15; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');

		i++;
	}
}
