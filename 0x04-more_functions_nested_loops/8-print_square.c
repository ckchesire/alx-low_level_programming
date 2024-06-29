#include "main.h"
/**
 * print_square - function that prints a square, followed by a new line
 * @size: input parameter for integer values of squares
 * Return: return square based on size
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size ; i++)
		{
			for (j = 0; j < size ; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
