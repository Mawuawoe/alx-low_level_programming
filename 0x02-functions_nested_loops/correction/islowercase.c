#include <stdio.h>

int _islower(int c)
{
    if(c >= 'a' && c <= 'z')
    {
        return (1);
    }
    else{
        return(0);
    }
}

int main (void)
{
    int r;
    r = _islower('A');
    printf("%d \n", r);
    return(0);   
}