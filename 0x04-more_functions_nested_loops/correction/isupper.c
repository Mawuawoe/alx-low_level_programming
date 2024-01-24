#include <stdio.h>

int _isupper (int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return(1);
    }
    else{
        return(0);
    }
}

int main(void)
{
    int r;
    r = _isupper('A');
    printf("%i", r);
    printf("\n");
    return(0);
}

