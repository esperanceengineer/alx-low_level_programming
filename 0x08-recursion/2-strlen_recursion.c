#include "main.h"

/**
 * _strlen_recursion - prints length in recursion
 * @s: string
 * Return: return the lenght of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
