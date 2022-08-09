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
    int *world = malloc(3 * sizeof(int));

    *(world) = 5;
}