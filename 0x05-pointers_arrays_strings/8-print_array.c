#include <stdio.h>

/**
* print_array - a function that prints
* n elements of an aray of integers,
* followed by a new line
* @a: the array
* @n: number of elements to be printed
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}
	printf("\n");
}
