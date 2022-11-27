#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that print strings entered
 * @seperator: pointer that seperate strings
 * @n: the list of strings
 * @...: variadic indicator for more parameter
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list list;
	char *str;
	unsigned int index;

	va_start(list, n);
	for (index = 0; index < n; index++)
	{
		str = va_arg(list, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (index != (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}
	printf("\n");

	va_end(list);
}
