#include "main.h"
/**
 * _isalpha - function to check for letter, lowercase or uppercase
 * @c: is the int that will be use for the argument of the function
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
