#include <stdio.h>
#include <stdlib.h>
/**
 * main - all single num
 * Return: 0
 */

int main
{
int c = 0;

while (c < 10)
{
putchar(48 + c);
if (c != 9)
{
putchar(',');
putchar(' ');
}
c++;
}
}
