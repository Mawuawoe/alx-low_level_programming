#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * write your line of code here
	 * NB:
	 * you are not to use a
	 * you are not to modify p
	 * only on statement
	 * you are not to code anything else than line of code
	 */
	*(p + 5) = 98;
		/* so that this print 98\n */
		printf("a[2] = %d\n", a[2]);
		return (0);
}
