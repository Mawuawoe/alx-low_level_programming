#include <stdio.h>

int add (int a, int b)
{
    int c;
    c = a + b;
    return(c);
}

int main (void)
{
    int r;
    r = add (3,4);

    printf("%i\n", r);
    return(0);
}