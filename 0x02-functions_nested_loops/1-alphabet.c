#include <stdio.h>
#include "main.h"

/*
 * main _ print the alphabets in lowercase then a new line
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void);
{
	char ch;

	char = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
