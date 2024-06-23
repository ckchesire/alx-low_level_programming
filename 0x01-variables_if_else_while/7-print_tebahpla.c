#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description :  Print alphabet in lower case reversed.
 * Return: Always '0' (success)
 */
int main(void)
{
	int a;

	a = 74;
	while (a >= 49)
	{
		putchar('0' + a);
		a--;
	}
	putchar('\n');
	return (0);
}
