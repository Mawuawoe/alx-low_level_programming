#include"main.h"

int main (void)
{
    int pow = 1;
    int base = 2;
    int sum = 0;
    
    char *b = "1001";
    printf("strlen = %ld\n", strlen(b));
   /* printf("char = %c\n", b[0]);
    printf("char = %c\n", b[1]);
    printf("char = %c\n", b[2]);
    printf("char = %c\n", b[3]);
    printf("char = %c\n", b[4]);*/
   int len = strlen(b);
    for (int x = 3; x >= 0; x--)
    {
      sum = sum +(pow * (b[x]- '0'));                
      pow = pow * base;
    }
    printf("%d\n", sum);

    int x = (b[3] - '0');
    printf("%d", x);
    putchar('\n');
   /* putchar('\n');
    putchar(b[1]);
    putchar('\n');
    putchar(b[2]);
    putchar('\n');
    putchar(b[3]);
    putchar('\n');*/

    
    /*putchar(2 + 48);
    putchar('\n');

    int r = 17;
    while(r != 0 ) 
    {
        int a = r % 10;
        putchar(a + '0');
        r = r/10;
    } 
    putchar('\n');*/
}