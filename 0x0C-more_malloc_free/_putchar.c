#include <unistd.h>

/**
 *_putchar - writes the character c to output
 * @c: The character to input
 * Return: On success 1.
 * On error, -1is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
