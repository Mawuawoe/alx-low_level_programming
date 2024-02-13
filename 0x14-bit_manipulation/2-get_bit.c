#include "main.h"
/**
 * get_bit - get the bit at a given index
 * @n : the given number
 * @index : the given index
 * Return : the value of the bit at the given index or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
    unsigned int i;

    if (index > sizeof(size_t) * 8)
    {
        return(-1);
    }
    else
    {
        for(i = 0; i < index; i++)
        {
            n = n >> 1;/*shifting to the left until we get to the given */
        }
        return(n & 1);/*returns that bit*/
    }
}