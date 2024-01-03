#include <stdio.h>

int _isalpha(int c){
    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
    {
        return(1);
    }
    else 
    {
        return(0);
    }
}

int main(void)
{
    int r;

    r = _isalpha('1');
    printf("%d \n", r);
    return (0);
}