#include "main.h"
/**
 * _sqrt_recursion - function returns the natural square root of number
 * @n: square value
 * Return: returns square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 1));
}
/**
 * _sqrt_helper - helper to find natural square root of number
 * @num: number to find square root
 * @g: guess to try find the square root
 * Return: return root for a number n
 */
int _sqrt_helper(int num, int g)
{
	if ((g * g) > num)
	{
		return (-1);
	}
	else if ((g * g) == num)
	{
		return (g);
	}
	else
	{
		return (_sqrt_helper(num, g + 1));
	}
}
