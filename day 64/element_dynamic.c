#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // So for adding element we use malloc for dynamic allocation of array.

    int *array = malloc(3 * sizeof(int));
    if (array == NULL)
    {
        return 1;
    }
    
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;

    // When I wanna add new element.

    int *new_arry = malloc(4 * sizeof(int));
    if (new_arry == NULL)
    {
        free(array);
        return 1;
    }

    new_arry[3] = 4;

    // adding existing elements to new array.
    for (int i = 0; i < 3; i++)
    {
        new_arry[i] = array[i];
    }


    printf("%p\n", array[0]);
    printf("%i\n", new_arry[3]);

    free(new_arry);
}
