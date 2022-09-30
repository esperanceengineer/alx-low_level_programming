#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcat - concat the string
 * @a: dest
 * @b: src
 * Return: Return the pointer to dest
 */
char *_strcat(char *a, char *b)
{
	strcat(a, b);
	return (a);
}
