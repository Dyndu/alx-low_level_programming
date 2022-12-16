#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print num from 0 to 9
 *
 * Return: void
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		_putchar(n);
	}
	_putchar(10);
}
