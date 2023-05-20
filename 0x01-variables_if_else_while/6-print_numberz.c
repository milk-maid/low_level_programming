#include <stdio.h>

/**
 * main - printing zero to nine as it is in base ten
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
