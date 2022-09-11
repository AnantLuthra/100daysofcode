#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int man[3];

    man[0] = 1;
    man[1] = 2;
    man[2] = 3;

    for (int i = 0; i < 3; i++)
    {
        printf("%i ", man[i]);
    }
    printf("\n");
}