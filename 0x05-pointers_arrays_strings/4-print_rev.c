#include "main.h"

/**
* print_rev - a function that prints a string,
* in reverse, followed a new ;ine.
* @s: string to be printed in reverse order
*/

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		1--;
	}
	_putchar('\n');
}
