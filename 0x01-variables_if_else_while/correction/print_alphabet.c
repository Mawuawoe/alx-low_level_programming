#include<stdio.h>

int main(void)
{
for (char ch = 'a'; ch <= 'z'; ch++){
    putchar(ch);
}
for (char c = 'A'; c <= 'Z'; c++){
    putchar(c);
}
putchar('\n');
return(0);
}