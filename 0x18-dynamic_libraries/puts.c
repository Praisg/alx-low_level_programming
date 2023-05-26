#include "main.h"
/**
 * _puts - prints a stringg, 
 * @str: pointer to the strnggg
 * Return: void
*/


void _puts(char *str)
{
	int index = 0;
	while (str[index])
{
	_putchar(str[index]);
	index++;
}
	_putchar('\n');
}

