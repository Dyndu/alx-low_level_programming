#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*More headers goes here*/
/**
 * main - Entry point
 * Description - Print if randon generate
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is positive\n", n);
	return (0);
}