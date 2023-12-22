#include <stdio.h>

int main(void)
{
    int i = 0;

    while( i < 10)
    {
        char j = 'a';
        while(j <= 'z')
        {
            printf("%c", j);
            j++;
        }
        printf("\n");
        i++;
    }
    return(0);
}