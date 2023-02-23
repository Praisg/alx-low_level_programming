/**
 * file 101-natural.c
 * auth; praise
 */

#include <stdio.h>

/**
 * main -all natural nums
 * Return: always 0
 */

int main(void)
{
int i, sum = 0;

for (i = 0; i < 1024; i++)
{
if ((i % 3) == 0 || (i % 5) == 0)
	sum += i;
}
printf("%d\n", sum);

return (0);
}
