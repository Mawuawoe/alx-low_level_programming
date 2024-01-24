#include<stdio.h>

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}	
	return (0);
}

int main(void)
{
    int r;
    r = _isdigit(5);
    printf("%i\n", r);
    return(0);
}