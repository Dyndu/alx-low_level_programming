#include "main.h"
#include <limits.h>

/**
 * print_last_digit -print the last digit of a number
 * @n: the number which digit has to be printed
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)

		ld *= -1;

	_putchar(ld + '0');

	return (0);
}
