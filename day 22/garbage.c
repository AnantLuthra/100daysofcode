#include <stdio.h>

int main(void)
{

    int marks[3];
    
    // Getting length of array.
    int l = sizeof marks / sizeof marks[0];


    for (int i = 0; i < l; i++)
    {
        printf("%i\n", marks[i]);  
    }


    // OUTPUT:- 

    // 4200891
    // 4200800
    // 0

    // Garbage values will be printed.
    // - Garbage values are those values which get's printed when we didn't assign the values of any variable.
    // - These are unknown values that were in the memory when other programs were running in background.

    // These things are often sometimes literally used by hackers to see the values in the memory.

}