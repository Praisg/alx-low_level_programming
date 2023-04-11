#include "main.h"
#include <unistd.h>
/**
 * _putchar - write char c to standard output
 * @c: char to be printed
 *
 * Return: always 1 success
 * On error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

