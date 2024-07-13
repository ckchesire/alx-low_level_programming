#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguments passed to it
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: '0' success
 */
int main(int argc, char **argv)
{
	int count = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	if (argc > 1)
	{
		while (argc--)
		{
			argv++;
			count++;
		}
	}
	printf("%d\n", count - 1);
	return (0);
}
