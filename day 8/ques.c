#include <stdio.h>

// Write a program which take input of string from user and print every word in new line.

int str_len(char name[]);

int main(void)
{
    char str[100];
    fgets(str, sizeof(str), stdin);

    // printing each word at new line
    for (int i = 0, l = str_len(str); i < l; i++)
    {
        if (str[i] == 32)
        {
            printf("\n");
        }
        else
        {
            printf("%c", str[i]);
        }
    }
    return 0;
}


int str_len(char name[])
{
    // way 1
    int i;
    for (i = 0; name[i] != '\0';i++){}
    return i;
}