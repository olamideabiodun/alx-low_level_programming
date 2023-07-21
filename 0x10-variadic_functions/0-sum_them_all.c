#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all inputs
 * @n: number of arguments
 *
 * Return: sum else 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	int total;
	unsigned int i;
	if (n == 0)
		return (0);

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		total += va_arg(arg, int);
	}

	va_end(arg);

	return (total);
}
