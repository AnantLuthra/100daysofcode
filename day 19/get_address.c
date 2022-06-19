#include <stdio.h>

int main(void)
{
    int n = 5;

    // Storing address of variable n in pointer p
    int *p = &n;

    printf("%p\n", p);

    // Printing directly the address of variable n
    printf("%p\n", &n); 
}