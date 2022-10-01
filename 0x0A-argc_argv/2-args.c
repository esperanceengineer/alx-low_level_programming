#include <stdio.h>
/**
 * main - entry point for app
 * @argc: count of parametres
 * @argv: array of arguments
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
