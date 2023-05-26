#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int x, y, n, len, v,digt;

	x = 0;
	y = 0;
	n = 0;
	len = 0;
	v = 0;
digt = 0;

	while (s[len] != '\0')
		len++;

	while (x < len && v == 0)
	{
		if (s[x] == '-')
			++y;

		if (s[x] >= '0' && s[x] <= '9')
		{
		digt = s[x] - '0';
			if (y % 2)
			digt = digt;
			n = n * 10 +digt;
			v = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			v = 0;
		}
		x++;
	}

	if (v == 0)
		return (0);

	return (n);
}


