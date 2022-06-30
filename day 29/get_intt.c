#include <stdio.h>
#include <stdlib.h>

int get_int(char *string);

int main(void){

    int age = get_int("Enter your age: ");
    int height = get_int("Enter your height: ");
    printf("Your age is - %i, & height is - %i\n", age, height);
}

int get_int(char *string) {

    int *a;
    a = malloc(sizeof(int));

    // printing out the console input statement.
    printf("%s", string);
    scanf("%i", a);

    // Putting a pointer's value into b variable.
    int b = *a;

    // Free the space after the work is done.
    free(a);

    return b;
}