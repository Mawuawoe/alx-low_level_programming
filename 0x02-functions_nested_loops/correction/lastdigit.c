#include <stdio.h>

int print_last_digit(int n)
{
    return (n % 10);
}

int main(void)
{
    int r;

    r = print_last_digit(-24);
    printf("%i \n", r);
    return(0);
}