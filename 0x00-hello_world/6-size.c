#include  <stdio.h>

/**
 * main - output the size of various datatypes.
 * Return: 0 if successfully executed, otherwise not zero.
 */
int main(void)
{
	printf("The size of char is:%d byte(s)\n", sizeof(char));
	printf("The size of integer is:%d byte(s)\n", sizeof(int));
	printf("The size of long integer is:%d byte(s)\n", sizeof(long int));
	printf("The size of long long integer is:%d byte(s)", sizeof(long long int));
	printf("The size of float is:%d byte(s)\n", sizeof(float));
	return (0);
}
