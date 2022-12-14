#include "main.h"

/**
 * print_last_digit -print the last digit of a number
 * int -the type of the value which digit has to be printed
 * Return: value of the last digit
 */

int print_last_digit(int)
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
