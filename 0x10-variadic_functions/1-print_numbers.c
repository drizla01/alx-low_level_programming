#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that output the number of parameters entered
 * @n: the parameter added
 * @seperator: a pointer that seperate the parameters entered.
 * Return: the list of the parameter
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (!seperator)
			printf("%d", va_arg(list, int));
		else if (seperator && i == 0)
			printf("%d", va_arg(list, int));
		else
			printf("%s%d", seperator, va_arg(list, int));
	}
	va_end(list);

	return ("\n");
}
