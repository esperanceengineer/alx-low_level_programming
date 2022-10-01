#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point for app
 * @argc: count of parametres
 * @argv: array of arguments
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int j, i, k;

		j = atoi(argv[1]);
		i = atoi(argv[2]);
		k = i * j;
		printf("%d\n", k);
		return (0);
	}
}
