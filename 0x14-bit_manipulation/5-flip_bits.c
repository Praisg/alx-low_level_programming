#include "main.h"

/**
 * flip_bits - num of bits to change
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int x, count = 0;
for ( x = n ^ m; x != 0; x = x >> 1)
{
count += x & 1;
}
return (count);
}

