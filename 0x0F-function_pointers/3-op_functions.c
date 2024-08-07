#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - function to return the sum of a and b
 * @a: first integer
 * @b: second integer
 * Return: returns the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function to return the difference of a and b
 * @a: first integer
 * @b: second integer
 * Return: returns the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function returns the product of a and b
 * @a: first integer
 * @b: second integer
 * Return: returns the product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function returns the result of division of a by b
 * @a: first integer
 * @b: second integer
 * Return: returns the result of division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function returns the remainder of the division of a by b
 * @a: first integer
 * @b: second integer
 * Return: returns the mod
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
