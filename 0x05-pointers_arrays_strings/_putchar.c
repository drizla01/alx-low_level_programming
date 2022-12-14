#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: character to put
 *
 * Return: on success 1
 * on error, return -1, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
