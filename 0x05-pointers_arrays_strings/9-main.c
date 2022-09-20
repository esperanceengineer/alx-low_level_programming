#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *ptr;
	char S1[98];

	ptr  = _strcpy(S1, "First, solve the problem. Then write the code");
	printf("%s\n", S1);
	printf("%s\n", ptr);
	return (0);
}
