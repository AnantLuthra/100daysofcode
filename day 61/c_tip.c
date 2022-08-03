#include <stdio.h>
#include <stdlib.h>

int get_int(char *string);

int main(void)
{
    // You can create a variable as per your condition in one line.

    // Normal code-
    int a = get_int("Enter your age: "); // Getting the age.
    int b;
    if (a >= 18)
    {
        b = 1; // Means you can have a driving license
    }
    else{
        b = 0; // 0 means false so that you can't have a driving license
    }

    // Doing it in oneline. 
    int c = (a >= 18)?1:0;
    printf("Age - %i, output 1 - %i, output 2 - %i\n", a, b, c);
}

int get_int(char *string) {

    int *a;
    a = malloc(sizeof(int));
    printf("%s", string);
    scanf("%i", a);
    int b = *a;
    free(a);
    return b;
}
