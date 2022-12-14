#include "main.h"
#include <limits.h>

/**
 * print_last_digit -print the last digit of a number
 * @n: the number which digit has to be printed
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int n = INT_MIN;

	if (n == INT_MIN)
	{
		int a = -n;

		a = n % 10;

		_putchar(a + '0');
	}

	return (0);
}
