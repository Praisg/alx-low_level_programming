#include "main.h"

/**
 * swap_int -swaps integers
 * @a: int1
 * @b: int2
 */

void swap_int(int *a, int *b)
{
int m;

m = *a;
*a = *b;
*b = m;
}
