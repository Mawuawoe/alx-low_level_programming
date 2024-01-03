#include <stdio.h>

int print_sign(int n)
{
    if(n > 0)
    {
        printf("+, ");
        return(1);
    }
    else if(n == 0)
    {
        printf("0, ");
        return(0);
    }
    else
    {
        printf("-, ");
        return(-1);
    }
}

int main (void)
{
    int r;

    r = print_sign(-2);
    printf("%i \n", r);

    return(0);
}