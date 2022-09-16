#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: is the number we take and returnd it's last digit.
 *
 * Return: Value of the last digit.
 */

int print_last_digit(int n)
{
	int r;

	r = n % 10;
	if (r < 0)
	r *= -1;
	_putchar('0' + r);
	return (r);
}
