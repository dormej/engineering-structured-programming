#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
}

void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf(" %d ", node->data);
        node = node->next;
    }
}
int main()
{
    int rozmiar;
    printf("Podaj rozmiar listy: ");
    scanf("%i", &rozmiar);
    int tab[rozmiar];
    struct Node* head = NULL;

    for (int i=0;i<rozmiar;i++)
    {
      printf("podaj element: ");
      scanf("%i", &tab[i]);
      push(&head, tab[i]);

    }
    printf("Stworzona lista: ");
    printList(head);

    return 0;
}


