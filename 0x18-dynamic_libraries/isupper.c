#include "main.h"

/**
* _isupper - checks for uppercase char
* @c: Var
* Return: Always 0.
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

