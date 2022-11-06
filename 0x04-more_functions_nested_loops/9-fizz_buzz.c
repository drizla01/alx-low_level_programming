#include <stdio.h>

/**
 * main - print a fizzbuzz program
 * Return: if the number is divisible by 3 prìnt Fizz
 * if it is divisible by 5, print Buzz
 * if it is divisible by both 3 and 5 print FizzBuzz
 * otherwise, print the number
 */
int main(void)
{
	int nb;

	for (nb = 1; nb <= 100; nb++)
	{
		if ((nb % 3) == 0 && (nb % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((nb % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((nb % 5) == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", nb);
		}
	}
	printf("\n");
	return (0);
}
