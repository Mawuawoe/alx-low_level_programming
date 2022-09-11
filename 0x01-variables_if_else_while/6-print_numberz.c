#include <stdio.h>
/**
 * main - prints number from 0 to 9
 *
 * Description: using the main function
 * this program print digits from 0 to 9
 * Return: 0
 */
int main(void)
{
	int m;

	for (m = '0'; m <= '9'; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
