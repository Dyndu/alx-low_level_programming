#include <stdio.h>
/**
 * main -prints combinaison of two digit numbers
 * Return: Always 0
 */
int main(void)
{
	int dyn;
	int du;

	for (dyn = 0; dyn <= 9; dyn++)
	{
		for (du = dyn + 1; du <= 9; du++)
		{
			putchar(dyn + '0');
			putchar(du + '0');
			if (dyn < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
