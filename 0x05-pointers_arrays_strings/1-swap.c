#include "main.h"

/**
 * swap_int - swap two int values
 * @a: first number
 * @b: second number
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
