#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arry[3];
    
    arry[0] = 1;
    arry[1] = 2;
    arry[2] = 3;

    // trying to add one more element outside of assigned integers.
    arry[3] = 4;

    // printing the normal array
    for (int i = 0, len = sizeof(arry) / sizeof(arry[0]); i < len; i++)
    {
        printf("%i", arry[i]);
    }
}