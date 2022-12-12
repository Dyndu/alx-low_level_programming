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
	int n; lastNum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastNum = n % 10

	if (lastNum < 5)
		printf("Last digit of %d is %d and is graether than 5\n", n, lastNum);
	else if (lastNum == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastNum);
	else
		printf("Last digit of %d is %d and is less than is 6 and not 0\n", n, lastNum);
	return (0);

}
