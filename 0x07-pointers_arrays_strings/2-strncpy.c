#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncpy - concat the string
 * @a: dest
 * @b: src
 * @n: count
 * Return: Return the pointer to dest
 */
char *_strncpy(char *a, char *b, int n)
{
	strncpy(a, b, n);
	return (a);
}
