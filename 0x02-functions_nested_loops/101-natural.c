 #include <stdio.h>
#include "main.h"

/**
 * main - prints natural numbersa between 1024 that are
 * multiples of 3 & 5
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	for (a = 1; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
			b += a;
	}
	printf("%d\n", b);
	return (0);
}
