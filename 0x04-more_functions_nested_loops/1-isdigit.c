#include "main.h"

/**
 * _isdigit - checks a char is a digit or not
 * @c: tested char
 * Return: 1 if it is, 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}
