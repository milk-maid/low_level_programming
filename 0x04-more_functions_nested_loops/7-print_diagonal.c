 #include "main.h"

/**
 * print_diagonal - drawing a diagonal line on the terminal
 *
 * @n: length of the diagonal
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		j = i;
		while (j--)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
