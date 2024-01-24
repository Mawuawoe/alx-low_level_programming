#include<stdio.h>

int main(void)
{
    int i = 0;
    int j = 0;

    while (i < 10)
    {
        while (j <= 14)
        {
            printf("%i, ", j);
            j++;
        }
        printf("\n");
        i++;
        j = 0;
    }
    return(0);
}