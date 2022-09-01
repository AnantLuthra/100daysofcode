#include <stdlib.h>
#include <stdio.h>

typedef struct node
{
    int number;
    struct node *left;
    struct node *right;
}
node;

int main(void)
{
    // Making root tree.
    node *tree = NULL;

    // Adding value to root tree.
    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    n->number = 2;
    n->left = NULL;
    n->right = NULL;
    tree = n;

    // Making left child of root tree.
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        free(tree);
        return 1;
    }
    n->number = 1;
    n->left = NULL;
    n->right = NULL;
    tree->left = n;

    // Making right child of root tree
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        free(tree->left);
        free(tree);
        return 1;
    }
    n->number = 3;
    n->left = NULL;
    n->right = NULL;
    tree->right = n;

}