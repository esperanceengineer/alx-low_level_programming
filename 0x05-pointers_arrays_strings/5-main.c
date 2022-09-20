#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str;

	str = "My first strlen!";
	rev_string(str);
	printf("%s\n", str);
	return (0);
}
