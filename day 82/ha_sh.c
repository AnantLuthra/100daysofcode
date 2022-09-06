#include <stdio.h>
#include <stdlib.h>

int NUMBER_OF_BUCKETS = 2;

typedef struct node
{
    char *word;
    struct node *next;
}
node;

void print_hash(node *hash);

int main(void)
{
    node *hash[NUMBER_OF_BUCKETS];
    
    node *n = malloc(sizeof(node));
    n->word = "Anant";
    n->next = NULL;
    hash[0] = n;

    n = malloc(sizeof(node));
    n->word = "Param";
    n->next = NULL;
    hash[1] = n;

    n = malloc(sizeof(node));
    n->word = "Heisenberg";
    n->next = NULL;
    hash[2] = n;
    
    
    // Printing the hash table.
    print_hash(hash);
}

void print_hash(node *hash)
{
    for (int i = 0; i < NUMBER_OF_BUCKETS; i++)
    {
        printf("%s\n", hash[i].word);
    }

    // I also tried printing values seperately but it's 
    // isn't working..
    printf("%i\n", (*hash).word);
    printf("%i\n", (*(hash + 1)).word);
    printf("%i\n", (*(hash + 2)).word);
}