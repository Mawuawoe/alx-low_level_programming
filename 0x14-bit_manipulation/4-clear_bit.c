#include"main.h"
/**
 * clear_bit - function that set the value of a bit at a given index to 0
 * @n: the given number
 * @index: the given inndex
 * Return: 1 if it works and -1 if it fails
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
    unsigned int mask;
    if(index > (sizeof(unsigned int) * 8) || n == NULL) 
    {
        return(-1);
    }
    else
    {
        mask = 1;
        mask = mask << index;
        if((( (*n) >> index) & 1) == 1)
        {
            *n = *n ^ mask;
        }
        return(1);
    }
}