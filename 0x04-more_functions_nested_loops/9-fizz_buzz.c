#include "main.h"
#include <stdio.h>
/**
 * main -fizzbuzz
 * Return: 0
 */

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0)
{
printf("Fizz\n");
}
else if (i % 5 == 0)
{
printf("Buzz\n");
}
else if (i % 5 == 0 && i % 3 == 0)
{
printf("FizzBuzz\n");
}
}
{
printf("%d\n", i);
}
return (0);
}
