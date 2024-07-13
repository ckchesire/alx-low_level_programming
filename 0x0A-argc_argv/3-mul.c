#include <stdio.h>
#include <stdlib.h>
/**
 * main - print result of multiplication m * n
 * @argc: counts number of arguments
 * @argv: array of arguments
 * Return: '0' success
 */
int main(int argc, char **argv)
{
	int m = 0, n = 0;

	if (argc == 3)
	{
		m = atoi(argv[1]);
		n = atoi(argv[2]);
		printf("%d\n", m * n);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
