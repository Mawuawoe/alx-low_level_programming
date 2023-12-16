#include <stdio.h>
/**
 * main - prints the alphabet in lower case in reverse
 *
 * Description: using the main function
 * this program prints thr alphabets in reverse and in lower case
 * Return: 0
 */
int main(void)
{
	char (c);

	for (c = 'z' ; c >= 'a' ; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
