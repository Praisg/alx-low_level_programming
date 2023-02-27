#include "main.h"

/**
 * _puts -prints string
 * @str: str to pri
 */

void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str++);
}
putchar('\n');
}
