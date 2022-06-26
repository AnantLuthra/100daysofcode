#include <stdio.h>
#include <stdlib.h>

void take_print_name(void);

int main(void)
{
    take_print_name();
}


void take_print_name(void)
{
    printf("Enter your name: ");
    char *name = malloc(4);
    scanf("%s", name);

    printf("Your age is - %s\n", name);

}