#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the alphabets in lowercase then a new line
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	_putchar('\n');
}
