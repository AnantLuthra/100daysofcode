#include <stdio.h>

int[] swap(int a, int b);

int main(void)
{
    int x = 1;
    int y = 2;

    // Before swapping.
    printf("x is %i, y is %i\n", x, y);


    // Swapping the values.
    x, y = swap(x, y);

    // After swapping.
    printf("x is %i, y is %i\n", x, y);
}


int args[] int swap(int a, int b)
{
    int temp = a;
    b = a;
    b = temp;

    return a, b;
}