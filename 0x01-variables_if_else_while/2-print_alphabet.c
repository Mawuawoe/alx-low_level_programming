#include <stdio.h>
/**
 * main - print the alphabet in lower case
 *
 * Description: using the main function
 * this program prints alphabets in lower cases
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
