#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - program that adds positive numbers
 * @argc: count arguments
 * @argv: arguments array
 * Return: '0' success
 */
int main(int argc, char **argv)
{
	int i = 0;
	unsigned int j = 0, sum = 0;
	char *a;

	for (i = 1; i < argc; i++)
	{
		a = argv[i];
		for (j = 0; j < strlen(a); j++)
		{
			if (a[j] < 48 || a[j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
