#include "main.h"
/**
 * set_bit - a functionn that sets the value of a bit to 1 at a given index
 * @n: the given number
 * @index: the given index
 * Return: 1 if it works and -1 if it fails
*/
int set_bit(unsigned long int *n, unsigned int index)
{
    unsigned int temp;
    if(index > sizeof(unsigned int) * 8)
    {
        return(-1);
    }
    else
    {
        temp = 1;
        temp = temp << index;
        *n = ((*n)) | temp;
        return(1);
    }
}