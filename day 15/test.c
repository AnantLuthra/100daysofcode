#include <stdio.h>

int main(void)
{
    int nums[5];
    nums[0] = 1;
    nums[0] = 2;

    for (int i = 0; i < 5; i++)
    {
        if (nums[i] == 0)
        {
            return 1;
        }
        printf("%i\n", nums[i]);
    }
    // printf("%c\n", nums[3]);
}