#include <stdio.h>
/**
 * main - prints numbers of base 16 and lower case alphabets
 *
 * Description: using the main function
 * this program prints the numbers of base 16 and lower case alphabets
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = '0' ; c <= '9' ; c++)
	{
		putchar(c);
	}
	for (c = 'a' ; c <= 'f' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
