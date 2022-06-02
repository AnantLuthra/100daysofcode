#include <cs50.h>
#include <stdio.h>
#include <string.h>

void str_ary(void);
int str_len(string name);
void work_do(void);
void print_str(string word);
void ret_upper(string word);


int main(void)
{
    // str_ary();
    string name = get_string("Enter your name: ");
    // int length = str_len(name);
    // printf("%i\n", length);

    // int length = strlen(name);
    // printf("%i\n", length);

    // print_str(name);

    ret_upper(name);
}

void work_do(void)
{
    int n = get_int("Enter the no. of boys: ");
    int ages[n];

    for (int i = 0; i < n; i++)
    {
        ages[i] = get_int("Enter your age: ");
    }

    for (int i = 0; i < n; i++)
    {
        printf("Age of %i boy is %i\n", i+1, ages[i]);
    }
}

void str_ary(void)
{
    string nacho = "nacho";
    printf("%c", nacho[5]);
}


int str_len(string name)
{

    // way 1
    int i;
    for (i = 0; name[i] != '\0';i++){}
    return i;

    // way 2
    // int i = 0;
    // while (name[i] != '\0')
    // {
    //     i++;
    // }
    // return i;
}


void print_str(string word)
{
    // Printing word by not using %s in printf statement.

    // Way 1
    // int i = 0;
    // while (strlen(word) > i)
    // {
    //     printf("%c", word[i]);
    //     i++;
    // }
    // printf("\n");

    // Way 2

    for (int i = 0, l = strlen(word); i < l; i++)
    {
        printf("%c", word[i]);
    }
    printf("\n");

}


void ret_upper(string word)
{
    // Printing uppercase of a string which is passed to me.
    for (int i = 0, l = strlen(word); i < l; i++)
    {
        printf("%c", (int)word[i] - 32);
    }
    printf("\n");
}