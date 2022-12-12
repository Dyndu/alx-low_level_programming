#include <stdio.h>
/**
 * main - prints alpha in lower case
 * Return: Always 0
 */
int main(void)
{
	char l_c;

	for (l_c = 'a'; l_c <= 'z'; l_c++)
	{
		putchar(l_c);
	}
	putchar('\n');
	return (0);
}
