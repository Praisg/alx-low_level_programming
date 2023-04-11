#include "main.h"

/**
 * get_endianness- ecks if macine is big or smaal
 * Return: 0 for big and 1 for small
 */
int get_endianness(void)
{
unsigned int x = 1;
char *c = (char *) &x;
return (*c);
}
