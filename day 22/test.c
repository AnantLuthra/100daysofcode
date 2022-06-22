#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *y;
    
    y = malloc(sizeof(int));
    *y = 5;
    printf("%i\n", *y);
}