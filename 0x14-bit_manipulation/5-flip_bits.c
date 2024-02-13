#include "main.h"
/**
 * flip_bits - function to know the number of bits we need to flip to get from one number to another
 * @n: number a
 * @m: number b
 * Return: the number of bits we need to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned long int result;
    unsigned long int count;
    result = n ^ m;/*this will get the difference ie where we need to flip*/
    count = 0;
    while(result > 0)
    {
        if((result & 1) == 1)
        {
            count++;
        }
        result = result >> 1;/*keeps shifting until r&1 == 1 and also == 0 to exit from the loop*/
    }
    return(count);
}