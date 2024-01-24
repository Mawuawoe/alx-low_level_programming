#include<stdio.h>

int main(void)
{
    int n = 402;

    printf("n=%d\n", n);
    printf("%p\n", &n);

    int *d = &n;
    printf("%u\n", *d);

    *d = 98;
    printf("n = %d\n", n);
}