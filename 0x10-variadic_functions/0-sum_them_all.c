#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all the parameter
 * @n: the entere parameters
 * @...: the variable number of parameter
 * Return: the sum of parameter
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;

	unsigned int index, sum = 0;

	va_start(list, n);

	if (n == 0)
		return (0);
	for (index = 0; index < n; index++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
