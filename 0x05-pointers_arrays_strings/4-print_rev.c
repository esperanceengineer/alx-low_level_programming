#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - returns the string in reverse
 * @c: pointer
 */
void print_rev(char *c)
{
	int l, i;

	l = strlen(c);
	for (i = l; i >= 0; i--)
	{
		if (c[i] != '\0')
		{
			putchar(c[i]);
		}
	}
	putchar('\n');
}
