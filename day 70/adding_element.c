#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
}
node;

int main(void)
{
    //Creating list.
    node *list = NULL;

    // Creating and adding nodes having value of 2,4
    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    n->value = 2;
    n->next = NULL;
    list = n;

    n = malloc(sizeof(node));
    if(n == NULL)
    {
        free(list);
        return 1;
    }
    (*n).value = 4;
    n->next = NULL;
    list->next = n;

    // adding elements between
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        free(list->next);
        free(list);
        return 1;
    }
    // adding node having 1 as value.
    n->value = 1;
    n->next = NULL;

    // then adding into linked list.
    n->next = list;
    list = n;

    printf("After adding 1 to linked list - ");
    for (node *tmp = list; tmp != NULL; tmp = tmp->next)
    {
        printf("%i", tmp->value);
    }
    printf("\n");


    n = malloc(sizeof(node));
    if (n == NULL)
    {   // If no more memory is available new node. 
        // Free all linked list and exit prgram.
        free(list->next->next);
        free(list->next);
        free(list);
        return 1;
    }
    // Adding node having value 3 between 2 and 4 node.
    n->value = 3;
    n->next = NULL;

    n->next = list->next->next; // First copying address of 4th node to
                                // Third node's next field.
    list->next->next = n;   // putting new node between 2 and 4 node.

    printf("After adding 3 to linked list - "); // printing the new linked list.
    for (node *tmp = list; tmp != NULL; tmp = tmp->next)
    {
        printf("%i", tmp->value);
    }
    printf("\n");

    // At the end free all the linked list.
    while (list != NULL)
    {
        node *tmp = list->next;
        free(list);
        list = tmp;
    }

}