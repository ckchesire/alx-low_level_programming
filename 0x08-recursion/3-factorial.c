#include "main.h"
/**
 * factorial - function that returns the factiorial of a given number
 * @n: number to calculate factorial
 * Return: retruns the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
