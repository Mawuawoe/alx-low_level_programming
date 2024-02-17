#include "lists.h"
void PrintFirst(void)__attribute__ ((constructor));
/**
 * PrintFirst - function that runs before main
*/
void PrintFirst(void)
{
    printf("You're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");
}
