#include <stdio.h>

int main(void)
{
    // Using pointer_arithmetic
    
    // Case of a string.
    char *n = "hello";
    printf("%c\n", *n);
    printf("%c\n", *(n + 1));
    printf("%c\n", *(n + 2));
    printf("%c\n", *(n + 3));
    printf("%c\n", *(n + 4));

    // In case of a int array.

    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

    // Getting size of array
    int size = sizeof nums / sizeof nums[0];
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
            printf("%i", *(nums + i));
        else
            printf("%i, ", *(nums + i));
    }

}