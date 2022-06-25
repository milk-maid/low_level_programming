/**
* _strlen - a function that return the length of a string
* @s: string to check for the length
* Return: lenght of the string
*/
int _strlen(char *s)
{
	int i, length;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	length = i;
	return (length);
}
