#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // For adding element we use malloc, realloc for dynamic allocation of array.


    // Allocating a chunk of heap memory for array.
    int *array = malloc(3 * sizeof(int));
    if (array == NULL)
    {
        return 1;
    }
    
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;

    // For adding new space for new element we will use realloc()

    int *new_arry = realloc(array, 4 * sizeof(int));
    if (new_arry == NULL)
    {
        free(array);
        return 1;
    }

    // Assigning new element of array.
    new_arry[3] = 4;


    array = new_arry;

    // Printing the new array.

    for (int i = 0; i < 4; i++)
    {
        printf("%i", array[i]);
    }

    free(new_arry);

}
