#include "main.h"

/**
 *  _abs - computes a absolute value of an integer
 *  @t: the integer to be computed
 *  Return: the absolute value of the integer
 */
int  _abs(int t)
{
	if (t >= 0)
		return (t);
	else
		return (-t);
}