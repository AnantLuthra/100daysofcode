#include <stdio.h>

typedef struct
{
    int age;
    int weight;
}
stuff;

int main(void)
{
    stuff name[1];
    
    // Assigning values.
    name[0].age = 17;
    name[0].weight = 50;

    name[1].age = 18;
    name[1].weight = 40;

    // Just printing value through for loop.
    for (int i = 0; i < 2; i++)
    {
        // if (name[i].age == 17)
        // {
        //     printf("Age is %i & weight is %i\n", name[i].age, name[i].weight);
        // }
        printf("Age is %i\n", name[i].age);
    }
}