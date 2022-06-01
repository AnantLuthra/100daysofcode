#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int length = get_int("How many subjects average do you want: "); // Getting how many subjects we want average of.
    int marks[length];

    // Getting scores values stored in marks array.
    for (int i = 0; i < length; i++)
    {
        marks[i] = get_int("Enter score: ");
    }

    // Doing total of them.
    int total = 0;
    for (int i = 0; i < length; i++)
    {
        total += marks[i];
    }

    // Taking out average of the total.
    float average = total / (float)length;

    // Final print statement.
    printf("Your average of %i subjects is - %f\n", length, average);
}