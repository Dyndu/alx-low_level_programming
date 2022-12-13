#include "main.h"

/**
 * print_alphabet_x10 - print alpha 10 times
 */

void print_alphabet_x10(void)
{
	int t;
	char lc;

	for (t = 0; t <= 9; t++)
	{
		for (lc = 'a'; lc <= 'z'; lc++)
			_putchar(lc);

		_putchar('\n');
	}
}
