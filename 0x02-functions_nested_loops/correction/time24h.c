#include <stdio.h>

void jack_bauer(void)
{
    int hours = 0;
    int min = 0;

    while( hours <= 23)
    {
        while(min <= 59)
        {
            if (hours < 10){
            printf("0%i", hours);
            }
            else{
                printf("%i", hours);
            }
            printf(":");
            if ( min < 10)
            {
                printf("0%i", min);
            }
            else{
                printf("%i", min);
            }
            min++;
            printf("\n");
        }
        hours++;
        min = 0;
    }
}

int main(void)
{
    jack_bauer();
    return(0);
}