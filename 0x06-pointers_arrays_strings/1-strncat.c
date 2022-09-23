#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncat - concat the string
 * @a: dest
 * @b: src
 * @n: count
 * Return: Return the pointer to dest
 */
char *_strncat(char *a, char *b, int n)
{
	strncat(a, b, n);
	return (a);
}
