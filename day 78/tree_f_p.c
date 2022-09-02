#include <stdlib.h>
#include <stdio.h>

typedef struct node
{
    int number;
    struct node *left;
    struct node *right;
}
node;

void print_tree(node *tree);
void free_tree(node *tree);

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
        free_tree(tree);
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
        free_tree(tree);
        return 1;
    }
    n->number = 3;
    n->left = NULL;
    n->right = NULL;
    tree->right = n;

    print_tree(tree);
    free_tree(tree);
}

void print_tree(node *tree)
{
    if (tree == NULL)
    {
        return;
    }
    print_tree(tree->left);
    printf("%i\n", tree->number);
    print_tree(tree->right);
}

void free_tree(node *tree)
{
    if (tree == NULL)
    {
        return;
    }
    free_tree(tree->left);
    free_tree(tree->right);
    free(tree);
}