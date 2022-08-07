#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* 
    
    1. Actually in C language when we create a variables normally they are 
        stored into stack memory whereas when we create a storage in our memory 
        for storing data using malloc it is stored in heap memory.

    Example - */
    int arry[5];  // This will be stored in stack memory.

    int *array = malloc(5 * sizeof(int)); // This will be stored in Heap memory.

    /*
    2. So when we continue to create more and more variables in stack memory it may cause to 
        stack overflow, and same in case of malloc when we don't free memory it also may cause
        to heap overflow.

    3. Thus, naming the site Stack Overflow is a bit of programmer-oriented humor, 
        indicating that this is where programmers can go when their stack has overflowed
        - or, in other words, when they're out of ideas and need help.

    4. If you like the info make sure to follow @anant_luthra_ on twitter, for more such tweets.
    */

}