#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description :  Print single digit characters 0-9.
 * Return: Always '0' (success)
 */
int main(void)
{
	char n;

	n = '0';
	while (n <= '9')
	{
		putchar( n);
		n++;
	}
	putchar('\n');
	return (0);
}
