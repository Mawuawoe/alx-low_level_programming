#include "3-calc.h"
/**
 * op_add - return the sum of 2 numbers
 * @a: integer
 * @b: integer
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub _ return the diff of 2 numbers
 * @a: int
 * @b: int
 * Return: diff
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return thr product of two numbers
 * @a: int
 * @b: int
 * Return: the product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return the division of two numbers
 * @a: int
 * @b: int
 * Return: quotient
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - return the remainder of div
 * @a: int
 * @b: int
 * Return: remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
