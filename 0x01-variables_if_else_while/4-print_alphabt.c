#include <stdio.h>
/**
 * main - print the alphabet in lower case except e and q
 *
 * Description: using the main function
 * this program prints out all the lower case alphabet except e and q
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
