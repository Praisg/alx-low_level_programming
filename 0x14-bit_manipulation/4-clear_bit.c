#include "main.h"

/**
 * clear_bit- clear bit to 0
 * @n: num to cgange
 * @index: of bit
 * Return: 1 success, -1 failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = (~(1ul << index) & *n);
return (1);
}
