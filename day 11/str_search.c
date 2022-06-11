#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[] = {'a', 'p', 'p', 'l', 'e'};
    char name1[] = {'a', 'p', 'p', 'l', 'e'};
    
    if (strcmp(name, name1) == 0)
    {
        printf("Yes you can eat.");
        return 0;
    }
    else{
        printf("%i\n", strcmp(name, name1));
        printf("No it's not their just go away!!");
        return 1;
    }
}