#include "main.h"

/**
 * print_last_digit -print the last digit of a number
 * @n: the number which digit has to be printed
 * Return:value of the last digit
 */

int print_last_digit(int n)
{
	int d = n % 10;

	if (d < 0)
		d *= -1;

	_putchar(d + '0');

	return (0);
}
