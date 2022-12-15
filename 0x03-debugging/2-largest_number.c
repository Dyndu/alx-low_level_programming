#include "main.h"

/**
 * largest_number - return the largest between 3 numbers
 * @a: first number
 * @b: second number
 * @c: third number
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
int largest;

if (a > b)
{
if (a > c)
{
largest = a;
}
else
{
largest = c;
}
}
else if (b > c)
{
largest = b;
}
else
{
largest = c;
}

return (largest);
}
