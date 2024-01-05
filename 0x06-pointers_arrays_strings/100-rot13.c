#include "main.hhh"

/**
 * rot13 - rot13 encoder
 * @str: string to be encoded
 *
 * Return: address of the encoded string
 */

char *rot13(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = transform_2(str[i]);
		i++;
	}
	return (str);
}

/**
 * transform_2 - helper function to map a letter with its rot13 encodeing
 * @x: char to be encoded
 *
 * Return: the encoded char
 */

char transform_2(char X)
{
	char one[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char two[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	char replacement = X;

	while (i < 52)
	{
		if (X == one[i])
		{
			replacement = two[i];
			break;
		}
		i++;
	}
	return (replacement);
}
