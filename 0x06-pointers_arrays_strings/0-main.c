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
	char S1[98] = "Hello ";
	char S2[] = "World!\n";

	ptr  = _strcat(S1, S2);
	printf("%s", S1);
	printf("%s", ptr);
	printf("%s", S2);
	return (0);
}
