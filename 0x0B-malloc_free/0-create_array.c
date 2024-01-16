#include "main.h"

/**
 * create_array - creates ab array of chars and
 * initialises it with a specific cahr
 * @size: size of the array
 * @c: character to insert
 * Return: null if size is zero or if it fails
 * pointer to array if everything is normal
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *) malloc(size * sizeof(c));

	if (array == 0)
	{
		return (NULL);
	}
	else
	{
		index = 0;
		while (index < size)
		{
			*(array + index) = c;
			index++;
		}
	}
	return (array);
}
