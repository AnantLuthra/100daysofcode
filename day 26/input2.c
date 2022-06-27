#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // char *name = malloc(4);
    char name[4];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello %s\n", name);
}