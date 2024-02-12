#include"main.h"

int main(void)
{
    char *b = "1001";
    int len = strlen(b);
    int j;
    int base = 2;
    int pow = 1;
    int x = 0;

    for(j = len -1; j>=0; j--)
    {
        x = x +(b[j] * pow);
        pow = pow * base;
        printf("%d\n", x);
    }

}