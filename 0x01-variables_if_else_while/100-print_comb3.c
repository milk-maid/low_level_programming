#include <stdio.h>

/**
 * main - printing all possible diff combo of 2 digite
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m;

	for (n = 48; n <= 56; n++)
	{
		for (m = 48; m <= 57; m++)
		{
			if (m < n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}

			}
		}

	}
	putchar('\n');
	return (0);
}
