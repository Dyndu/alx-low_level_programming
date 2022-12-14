#include "main.h"
#include <math.h>

/**
 * print_last_digit -print the last digit of a number
 * @n: the number which digit has to be printed
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int ld, pre, der;

	ld = log10(n);

	pre = n / pw(10, ld);

	der = n % 10;

	_putchar(ld + '0');

	return (0);
}
