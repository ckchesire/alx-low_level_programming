#include "calc.h"
#include <stdio.h>
/**
 * add - Adds up two integers
 * @a: First integer to be summed
 * @b: Second integer to be summed
 * Return: return the sum of two integers
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - function to return the difference of a and b
 * @a: first integer
 * @b: second integer
 * Return: returns the difference
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - function returns the product of a and b
 * @a: first integer
 * @b: second integer
 * Return: returns the product
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - function returns the result of division of a by b
 * @a: first integer
 * @b: second integer
 * Return: returns the result of division
 */
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: divided by 0\n");
	}
	return (a / b);
}

/**
 * mod - function returns the remainder of the division of a by b
 * @a: first integer
 * @b: second integer
 * Return: returns the mod
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: divided by 0\n");
	}
	return (a % b);
}
