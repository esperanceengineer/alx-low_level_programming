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
	char *str;

	l = strlen(c);
	for (i = l; i >= 0; i--)
	{
		if (c[i] != '\0')
		{
			*(str + i) = c[i];
		}
	}
	putchar('\n');
	puts(str);
}
