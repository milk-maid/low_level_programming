/**
* swap_int - a function that swaps the value of two integers
* @a: pointer to integer 1
* @b: pointer to integer 2
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
