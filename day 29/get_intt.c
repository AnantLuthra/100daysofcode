#include <stdio.h>
#include <stdlib.h>

int* get_int(char *string);

int main(void){
    int *age, *height;

    age = get_int("Enter your age: ");
    height = get_int("Enter your height: ");
    printf("Your age is - %i, & height is - %i\n", age, height);
}

int* get_int(char *string) {

    int *a;

    a = malloc(sizeof(int));
    
    printf("%s", string);
    scanf("%i", a);

    return a;
}