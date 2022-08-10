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
    // Creating main list variable which we will use longer till we are using this list.
    node *list = NULL;

    // Creating a n temp variable for adding new element to linked list.
    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }

    // Adding integer value to the first node.
    n->number = 1;
    n->next = NULL;

    // Copying address of first node to list variable.
    // So that we can access that afterwords.
    list = n;

    // Adding second number to list.
    n = malloc(sizeof(node));

    // Checking if no free memory is available in computer.
    if (n == NULL)
    {
        free(list);
    }

    n->number = 2;
    n->next = NULL;
    
    // Adding the second element to linked list by putting the address
    // second node to first node's next field.
    list->next = n;

    // Adding third node.
    n = malloc(sizeof(node));
    if (n == NULL) // If computer went out of memory.
    {
        // Keep in mind to free list in descending order,
        // otherwise you're gonan touch the memory that you have free already.
        free(list->next); // free the second node.
        free(list); // Free the first node.
        return 1;
    }

    n->number = 3;
    n->next = NULL; // Setting third node's next field empty for adding
                                            // next element to list.

    list->next->next = n;   // adding third node's address into second node's next field.

}