#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @n: num to change
 * @index: index of the bit to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = ((1ul << index) | *n);
return (1);
}

