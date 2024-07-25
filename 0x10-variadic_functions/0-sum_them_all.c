#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: input for integer n and other args
 * Return: returns sum or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	int total = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);
	while (i < n)
	{
		total += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (total);
}
