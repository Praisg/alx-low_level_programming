#include <stdio.h>
#include <stdlib.h>
/**
 * main - alphabet
 * Return: always 0(success)
 */

int main(void)
{
int ch = 'a';
int CH = 'A';
while (CH <= 'z')

{
putchar(ch);
ch++;
}
while (CH <= 'Z')
{
putchar(CH);
CH++;
}
putchar('\n');
return (0);
}
