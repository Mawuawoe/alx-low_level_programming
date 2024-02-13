#include"main.h"
/**
 * get_endianness - check the system byte recording order
 * Return: 0 if big endian or 1 if little endian
*/
int get_endianness(void)
{
    int x = 1;
    int l_or_b;

    l_or_b = (int) (((char*) &x)[0]);
    return (l_or_b);
}