#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description :  Print single digit numbers of base 10.
 * Return: Always '0' (success)
 */
int main(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
