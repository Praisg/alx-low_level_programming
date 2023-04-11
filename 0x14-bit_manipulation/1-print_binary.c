#include "main.h"
#include <stddef.h>

/**
 *print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
int j;
int val = 0;
unsigned long int org;

for (j = 1 << 31; j > 0; j >>= 1)
{
org = n >> j;

if (org & 1)
{
_putchar('1');
val++;
}
else if (val)
_putchar ('0');
}
if (!val)
_putchar ('0');
}
