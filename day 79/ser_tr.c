#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *left;
    struct node *right;
}
node;

int search_binary(node *tree, int number)
{
    if (tree != NULL)
    {
        /* If searched number is lessor than current tree's 
        number then going more into left child. */
        if (number < tree->number)  
        {
            search_binary(tree->left, number);
        }
        /* If number is greater than tree's value then searchin
        more in right child tree. */
        else if (number > tree->number)
        {
            search_binary(tree->right, number);
        }
        else // When value is found..
        {
            return 1;
        }
    }
}

int main(void)
{
    // Making tree of values 1, 2, 3
    node *tree = NULL;

    node *n = malloc(sizeof(node));
    n->number = 2;
    n->left = NULL;
    n->right = NULL;
    tree = n;

    n = malloc(sizeof(node));
    n->number = 1;
    n->left = NULL;
    n->right = NULL;
    tree->left = n;

    n = malloc(sizeof(node));
    n->number = 3;
    n->left = NULL;
    n->right = NULL;
    tree->right = n;
    
    int result = search_binary(tree, 3);

    // Checking conditions.
    if (result != 1)
    {
        printf("Value not present\n");
        return 1;
    }
    printf("Value present\n");
}