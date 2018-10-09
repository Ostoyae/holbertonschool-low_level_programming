#include <stdlib.h>

/**
 * create_array - creates an array of a spacific size and fill with a char.
 * @size : the Size of the array to make.
 * @char: characture to fill the array with.
 *
 * Return: An array of charactures.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size <= 0)
		return (0);
	ar = malloc(sizeof(char) * (size - 1));
	i = 0;
	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
}