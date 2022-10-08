#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 *allDigits - check if string is all digits
 *@str: string
 *@len: length og string
 *Return: true or false
 */
int allDigits(char *str, int len)
{
	int i = 0, end = 0;

	for (i = 0; i < len; i++)
	{
		if (isdigit(str[i]))
			end = 1;
		else
		{
			end = 0;
			break;
		}
	}
	return (end);
}

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
		exit(98);
	}
	else
	{
		int len1 = strlen(argv[1]), len2 = strlen(argv[2]);

		if (allDigits(argv[1], len1) == 0 || allDigits(argv[2], len2) == 0)
		{
			printf("Error\n");
			exit(98);
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
}
