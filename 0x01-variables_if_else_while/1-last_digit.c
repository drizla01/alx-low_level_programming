#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - if last digit of the random value n
 * is greater than 5, it prints the first condition.
 * if the last digit of the random number is 0,
 * it prints the second condition.
 * if the last digit of the random number is,
 * greater than 6 and not equal to zero it,
 * prints the last condition.
 * Return: 0 if successfully executed
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	else if (n % 10 == 0)
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	else if (n % 10 < 6 && n % 10 != 0)
		printf("Last digit of %d is %d and is less than 6 and not equal to 0\n"
				, n, n % 10);
	return (0);
}
