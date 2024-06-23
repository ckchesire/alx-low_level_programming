#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description :  Print Hexadecimal in lower case.
 * Return: Always '0' (success)
 */
int main(void)
{
	int a, n;

	a = 49;
	n = 0;
	while (n <= 9)
	{
		putchar('0' + n);
		n++;
	}
	while (a <= 54)
	{
		putchar('0' + a);
		a++;
	}
	putchar('\n');
	return (0);
}
