#include <stdio.h>
/**
 * main - print all natural numbers from input to 98
 *               in order separated by a comma followed by a space
 * @n: The number to begin counting at.
 * Return: 0
 */
int main(void)
{
	int n;

	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
