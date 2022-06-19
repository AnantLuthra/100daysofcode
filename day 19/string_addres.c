#include <stdio.h>

typedef struct
{
    char *value;
}
string;

int main(void)
{

    // Making a string with '*' operator.
    char *s = "hello";

    // Making a string through making our own data structure 'string'.
    string a;
    a.value = "hello";
    printf("%s\n", a.value);

    // Printing each character of string through iterating over each.

    for (int i = 0; i < 5; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");

    // Pointer of a whole string points towards the first character of the string.
    // Let's test that.

    char *name = "anant";
    char *address = &name[0]; // Address of first character of string.
    printf("%p\n", address); // Address of whole string.
    printf("%p\n", name[1]); // But address of second character of string is different.
    printf("%c", name[200]); // And 3'rd one is also having different.

    // Printing out addresses of name string character and more on forward.
    for (int i = 0; i < 10; i++)
    {
        printf("%p\n", &name[i]);
    }

}