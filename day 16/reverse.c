#include <stdio.h>

int main(void)
{
    // Actual array.
    int vars[] = {1, 2, 3, 4, 5};

    // Getting size of the array.
    int size = sizeof vars / sizeof *vars;


    int value;

    // Reversing array.
    for (int i = 0, n = 1; i < size / 2; i++, n++)
    {
        value = vars[i];
        vars[i] = vars[size - n];
        vars[size - n] = value;
    }

    // Printing the array.
    for (int i = 0; i < size; i++)
    {
        printf("%i", vars[i]);
    }
    printf("\n");
}
