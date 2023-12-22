#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * 3 multiples print fizz instead of the number
 * 5 multiples print buzz instead of the number
 * 3 & 5 multiples print FizzBuzz instead of the number
 * Return
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("Buzz");
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	print("\n");
	return (0);
}
