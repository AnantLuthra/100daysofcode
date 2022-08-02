#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    char *name = malloc(16);

    sprintf(name, "%03i.jpg", 50);
    printf("%s\n", name);

}