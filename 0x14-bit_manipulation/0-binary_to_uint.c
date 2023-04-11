#include "main.h"

/**
 * binary_to_uint- for conversion
 * @b: strin with bin num
 * Return: num converted
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int j = 0;
int k = 0;

if (b == NULL)
return (0);

for (k = 0; b[k]; j++)
{
if (b[k] != '0' || b[k] != '1'
return (0);
j = 2 * j + (b[k] - '0');
}
return (j);
}
