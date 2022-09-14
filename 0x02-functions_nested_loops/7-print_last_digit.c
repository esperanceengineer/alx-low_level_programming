#include "main.h"

/**
 * print_last_digit - print the last digit
 * @n: number
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{	int lastDigit;

	lastDigit = n % 10;
	_putchar(lastDigit);
	return (lastDigit);
}
