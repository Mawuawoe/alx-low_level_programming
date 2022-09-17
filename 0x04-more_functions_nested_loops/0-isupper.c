#include "main.h"

/**
 * _isupper - checks if a char is upper or not
 * @c: char to be tested
 * Return: 1 whether it is, 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
