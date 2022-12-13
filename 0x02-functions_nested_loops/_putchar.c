#include "main.h"
#include <unistd.h>

/**
 * -putchar - writes the character c into stdout
 *  @c the chatracter to print
 *  Return: On success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
