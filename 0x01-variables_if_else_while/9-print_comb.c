#include <stdio.h>
/**
 * main - printing all posible combination of single digit numbers
 *
 * Description: using the main function
 * this program prints 0 to 9 with , and space
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
