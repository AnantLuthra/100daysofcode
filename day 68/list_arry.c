#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}
node;

int main(void)
{
    // The main difference between a list and an array in C.

    // Array
    int array[] = {1, 2, 3, 4, 5};

    /* In an array the elements of it are stored in memory just after
    the before like byte after byte as you can see in image.
    This is the reason why we can print each value of element by just 
    adding 1 to the address of before element in the below for loop */

    for (int i = 0; i < 5; i++)
    {
        printf("%i", *(array + i)); // We are adding 1 each time for
    }                               // getting the next element address.
    printf("\n");

    // List
    node *list = NULL;

    /* On the other hand list elements aren't stored one after one in the
    memory they are stored randomly as per memory usage as you can clearly
    see in image demonstrating that properly. And that is why we can't print
    a linked list with normal for loop their is a special way of doing it.
    */

    /* I've not created all elements of this list because I just wanted to
    tell the difference between these two. */

    for (node *tmp = list; tmp != NULL; tmp = tmp->next)
    {
    printf("%i\n", tmp->number);
    }

}