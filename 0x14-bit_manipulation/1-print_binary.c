#include"main.h"
/**
 * print_base2 - convert base 10 to base 2
 * @n : the number in base 10 to be converted
 * Return : void
*/
void print_base2(unsigned long int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        print_base2(n >> 1);
        if ((n & 1) == 1)
        {
            _putchar('1');
        }
        else if ((n & 1) == 0)
        {
            _putchar('0');
        }
    }
}
/**
 * print_binary - convert base 10 to base 2
 * @n : the number in base 10 to be converted
 * Return : void
*/
void print_binary(unsigned long int n)
{
     if (n == 0)
     {
        _putchar('0');
     }
     else
     {
        print_base2(n);
     }
}   
