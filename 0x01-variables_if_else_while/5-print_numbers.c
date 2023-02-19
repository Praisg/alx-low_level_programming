#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - numbers in base 10
 * Return: always 0(succses)
 */

int main(void)
{
char c = '0';

while (c <= '9')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
