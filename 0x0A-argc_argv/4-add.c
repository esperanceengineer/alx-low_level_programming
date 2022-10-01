#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - entry point for app
 * @argc: count of parametres
 * @argv: array of arguments
 * Return: always zero
 */
int main(int argc, char *argv[])
{	int i = 0, result = 0, j;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		j = atoi(argv[i]);
		if (j == 0)
		{
			printf("Error\n");
			return (1);
		}
		result += j;
	}
	printf("%d\n", result);
	return (0);
}
