#include <stdio.h>

void jack_bauer(void)
{
    int hours = 0;
    int min = 0;
    int mins_remainder;
    int hours_remainder;

    while( hours <= 23)
    {
        while(min <= 59)
        {
            mins_remainder = min % 10;
            hours_remainder = hours % 10;

            printf("%i", hours);
            printf("%i", hours_remainder);
            printf(":");
            printf("%i", min);
            printf("%i", mins_remainder);
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