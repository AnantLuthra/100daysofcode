#include <stdio.h>


typedef struct 
{
    int smallest;
    int index;
}
sorting;

int main(void)
{
    // sorting done[1];
    // Array of integers.
    int nums[] = {5, 6, 3, 1, 0, 4, 7, 2};

    printf("Before sorting - ");
    for (int i = 0; i < 8; i++)
    {
        printf("%i ", nums[i]);
    }
    printf("\n");

    // Sorting the array through selection sort.
    for (int i = 0; i < 8; i++)
    {   
        int smallest = 8;
        int index = 0;
        for (int j = i; j < 8; j++)
        {
            if (nums[j] < smallest)
            {
                smallest = nums[j];
                index = j;
            }
        }

        // Swaping the numbers.
        nums[index] = nums[i];
        nums[i] = smallest;
    }
    printf("After sorting - ");
    for (int i = 0; i < 8; i++)
    {
        printf("%i ", nums[i]);
    }
    printf("\n");
}