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
    n->number = 1;
    n->next = NULL;

    list = n;
    n = malloc(sizeof(node));
    n->number = 2;
    n->next = NULL;

    list->next = n;

    // Making new element and pointing towards only that element and forgetting
    // the address of whole linked list.
    n = malloc(sizeof(node));
    n->number = 3;
    n->next = NULL;

    // list->next->next = n; but instead of doing this if I do like this.
    list = n;
    // So I'll not be able to free the whole linked list as I've forgotted address of it.

    while (list != NULL)
    {
        node *temp = list->next;
        free(list);
        list = temp;
    }

}