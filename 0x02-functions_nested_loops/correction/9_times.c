#include <stdio.h>

void times (void)
{
    int i = 0;
    int j = 0;
    int a;

    while (i <= 9)
    {
        while (j <= 9)
        {
            a = i * j;
            printf("%i, ", a);
            j++;
        }
        printf("\n");
        i++;
        j = 0;
    }
}

int main (void){
    times();
    return(0);
}