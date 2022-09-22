#include "main.h"

/**
 * _isupper - checks if a char is upper or not
 * @c: char to be tested
 * Return: 1 whether it is, 0 otherwise
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}

	return (0);
}
