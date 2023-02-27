#include "main.h"

/**
 * _puts -prints string
 * @str: str to pri
 */

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
