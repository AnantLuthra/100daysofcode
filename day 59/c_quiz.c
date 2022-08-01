#include <stdio.h>

void change_values(int a, int args[]);

int main(void)
{
    int a = 5;
    int values[] = {1, 2, 3, 4, 5};

    change_values(a, values);

    // Printing the value of a.
    printf("%i\n", a);

    // Getting the length of array.
    int length = sizeof(values) / sizeof(values[0]); 

    // printing all elements of values[] array.

    for (int i = 0; i < length; i++)
    {
        printf("%i", values[i]);
    }
    printf("\n");

    // What will be the output ??
}

void change_values(int a, int args[])
{
    // Changing the values.
    a = 4;

    args[0] = 6;
}
