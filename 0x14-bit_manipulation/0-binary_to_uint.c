#include"main.h"
/**
 * unsigned int binary_to_uint - a function that convert binary to base 10
 * @b : strings of 0 and 1
 * Return : the converted number, 0 if the string b contains and number aside 0or1 & if b is null 
*/
unsigned int binary_to_uint(const char *b)
{
    int len;
    int base = 2;
    int pow = 1;
    int sum = 0;
    int x;
    int i;
    len = strlen(b);
    if (b == NULL)
    {
        return(0);
    }
    else
    {
        if(len == 1 && (b[0] == '0' || b[0] == '1'))
        {
            return(b[0] - 48);
        }
        else
        {
            for (i=0; b[i] != '\0'; i++)
            {
                if( b[i] != '0' && b[i] != '1')
                {
                    return(0);
                }
            }           
            for (x = len-1; x >= 0; x--)
            {
                sum = sum +(pow * (b[x]- 48));
                pow = pow * base;
            }
            return(sum);
        }
    }
}