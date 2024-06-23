#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description :  print all possible combinations of single-digit numbers.
 * Return: Always '0' (success)
 */
int main(void)
{
	int a;

	a = 0;
	for (a = 0; a <= 9; a++)
	{
		putchar('0' + a);
		if (a == 9)
			break;
		putchar(',');
		putchar(' ');

	}
	putchar('\n');
	return (0);
}
