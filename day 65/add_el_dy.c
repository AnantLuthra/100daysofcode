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

    // Copying old in temerary new array.

    for (int i = 0; i < 3; i++)
    {
        new_arry[i] = array[i];
    }

    new_arry[3] = 4;
    free(array);
    array = new_arry;

    //printing the new array.

    for (int i = 0; i < 4; i++)
    {
        printf("%i", array[i]);
    }

    free(new_arry);

}
