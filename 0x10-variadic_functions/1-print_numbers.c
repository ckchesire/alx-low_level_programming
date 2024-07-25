#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function that prints numbers followed by a separator.
 * @separator: is the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	if (separator == NULL)
		return;

	if (n == 0)
	{
		va_end(ap);
		return;
	}

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	putchar('\n');
}
