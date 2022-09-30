#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcpy - copy the string
 * @a: dest
 * @b: src
 * Return: Return the pointer to dest
 */
char *_strcpy(char *a, char *b)
{
	strcpy(a, b);
	return (a);
}
