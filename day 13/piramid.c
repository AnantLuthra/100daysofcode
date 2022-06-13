#include <stdio.h>

void recursive_pyramid(int height);
void print_pyramid(int height);

int main(void)
{
    int height = 10;
    
    print_pyramid(height);
    recursive_pyramid(height);
}

void print_pyramid(int height)
{
    // Printing pyramid
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

void recursive_pyramid(int height)
{
    if (height <= 0)
    {
        return;
    }

    recursive_pyramid(height - 1);
    for (int i = 0; i < height; i++)
    {
        printf("#");
    }
    printf("\n");
}