#include "main.h"

/**
 * get_bit - returns the value of a bit
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
int val = 0;

if (index > 63)
	return (-1);

val = (n >> index) & 1;
return (val);
}

