#include <stdio.h>
/**
 * main - print the alphabet in lowercase
 * with a new line excep q and e
 * Return: Alway 0
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'q' && la != 'e')
			putchar(la);
	}
	putchar('\n');
	return (0);
}
