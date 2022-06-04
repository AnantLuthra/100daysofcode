#include <stdio.h>

int main(int argc, char argv[])
{
    // Printing our the argument
    if (argv[1])
    {
        printf("%c\n", argv[1]);
        return 0; // if everything went right.
    }    
    // Returning exit status
    return 1; // returning 1 if someting went wrong.
    
}