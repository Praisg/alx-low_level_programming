#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- main function to generate a random number
 * Return: always 0 FOR SUCCESS
 */

int main(void)/*main to generate random num*/
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{printf("%d is positive\n", n);
	}
else  if (n == 0)
{
printf("%d is zero\n", n);
}
else  if (n < 0)
{
printf("%d is negative\n", n);
}
return (0);
}
