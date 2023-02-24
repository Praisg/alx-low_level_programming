#include "main.h"
/**
 * largest_number - returns the well largest of 3 nums
 * @a: int1
 * @b: int2
 * @c: int3
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
int largest;

if (a > b && a > c)
{
largest = a;
}
else if (a > b && c > a)
{
largest = c;
}
else if (b > c)
{
	largest = b;
}
else
{
largest = c;
}
return (largest);
}
