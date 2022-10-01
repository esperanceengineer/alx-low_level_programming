#include <stdio.h>
/**
 * main - entry point for app
 * @argc: count of parametres
 * @argv: array of arguments
 * Return: always zero
 */
int main(int argc, __attribute__((__unused__)) char *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
