#include "main.h"
#include <math.h>

/**
 * print_last_digit -print the last digit of a number
 * @n: the number which digit has to be printed
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;

	x = n % 10;
	_putchar(x + '0');

	return (x);
}
