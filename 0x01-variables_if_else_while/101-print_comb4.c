#include <stdio.h>

/**
 * main - prints possible different combination of 3 digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, l;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; n < 58; m++)
		{
			for (l = 50; l < 58; l++)
			{
				if (m > n && l > m)
				{
					putchar(n);
					putchar(m);
					putchar(l);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
