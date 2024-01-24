#include<stdio.h>

int main(void)
{
    int n = 0;

    while(n <= 9)
    {
        if (n != 2 && n != 4)
        {
            printf("%i", n);
        }
       n++;
    }
    printf("\n");
    return(0);
}
