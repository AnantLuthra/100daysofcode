#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void swap(int *a, int *b);
int* get_int(char *var_name);

int main(void)
{
    int *a;
    a = get_int("Enter the value of a: ");

    int *b;
    b = get_int("Enter the value of b: ");

    // Before
    printf("a - %i, b - %i\n", *a, *b);

    swap(a, b);

    // After
    printf("a - %i, b - %i\n", *a, *b);

    printf("a - %i\n", *a);

}

void swap(int *a, int *b)
{
    int temp = a;
    a = b;
    b = temp;
}

int* get_int(char *var_name)
{   
    printf("%s", var_name);
    static int a;
    scanf("%i", &a);

    return (&a);
}