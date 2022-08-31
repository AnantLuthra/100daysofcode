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
    node *list = NULL;

    node *n = malloc(sizeof(node));
    if (n != NULL)
    {
        (*n).number = 1;
        n->next = NULL;
    }
    list = n;
    
    n = malloc(sizeof(node));
    if(n == NULL)
    {
        free(list);
    }
    n->number = 2;
    n->next = NULL;

    list->next = n;

    for (node *temp = list; list != NULL; temp = temp->next)
    {
        printf("%i\n", temp->number);
    }

    // Free the linked list.

    for (node *temp = list; temp != NULL; temp = n)
    {
        n = temp->next;
        free(temp);
    }
}