#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(void)
{
    // Copying array through allocating memory for it.
    // Using malloc function of stdlib.h liberary.

    char *name = "pranav";

    // Alocating memory for new variable.
    char *name2 = malloc(strlen(name) + 1);
    if (name2 == NULL)
    {
        return 1;
    }


    // Way 1 of doing copy of value of string to another value.
    // Storing name value in name2
    for (int i = 0, l = strlen(name); i < l; i++)
    {
        name2[i] = name[i];
    }


    // Way 2 of doing copy of value of string to another value.
    // Using strcopy function.
    strcpy(name2, name);


    // Now uppercasing first character of name2
    if (strlen(name) > 0)
        name2[0] = toupper(name2[0]);

    printf("name - %s\n", name);
    printf("name2 - %s\n", name2);

    free(name2);
    return 0;
}