#include <stdio.h>

int main(void)
{
    //Bubble sort.
    // Array of integers.
    int nums[] = {5, 6, 3, 1, 0, 4, 7, 2};

    // Getting size of the array.
    int size = sizeof nums / sizeof *nums;

    printf("Before sorting - ");
    for (int i = 0; i < 8; i++)
    {
        printf("%i ", nums[i]);
    }
    printf("\n");


    for (int i = 0; i < size - 1; i++)
    {
        int swaps = 0;
        for (int j = 0; j < size - 1; j++)
        {
            if (nums[j] > nums[j+1])
            {
                int value = nums[j+1];
                nums[j+1] = nums[j];
                nums[j] = value;
                swaps++;
            }
        }
        if (swaps == 0)  // Checking if their is no swaps made throughout the iteration.
        {
            break;
        }
    }

    printf("After sorting - ");
    for (int i = 0; i < 8; i++)
    {
        printf("%i ", nums[i]);
    }
    printf("\n");

}