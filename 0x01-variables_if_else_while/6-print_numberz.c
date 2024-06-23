#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description :  Print single digit characters using ASCII 48-57.
 * Return: Always '0' (success)
 */
int main(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		putchar('0' + n);
		n++;
	}
	putchar('\n');
	return (0);
}
