#include <stdio.h>
#include <stdlib.h>
/**
 * main - base 16
 * Return: always 0
 */

int main(void)
{
char ch;

for (ch = '0'; ch <= '9'; ch++)
{
putchar(ch);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
