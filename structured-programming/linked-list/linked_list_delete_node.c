#include <stdio.h>
#include <stdlib.h>

struct element {
    int data;
    struct element *next; // next pointer on the node
};
int main()
{
    int i,n,item;
    struct element *p, *q, *head;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    printf("Enter the value of the head node: ");
    scanf("%d", &item);

    q = (struct element*)malloc(sizeof(struct element));
    q->data = item;
    q->next = NULL;

    head = q;
    p = head;

    for (i=1;i<n;i++) // i=0 is a head, it has just been created
    {
        printf("Enter the value of the next node: ");
        scanf("%d", &item);

        q = (struct element*)malloc(sizeof(struct element));
        q->data = item;
        q->next = NULL;

        p->next = q; //link the nodes
        p = p->next; // jump to the current node
    }
    printf("\n");
    p = head;
    while(p!=NULL)
    {
        printf("%d",p->data);
        p = p->next;
    }
char d = 2;

q=head;
p=head->next;
if (q->data == d)
{
    head=p;
    free(q);
}
else
{
    while(p->data != d)
    {
        p=p->next;
        q=q->next;
    }
    if(p->next == NULL)
    {
        q->next=NULL;
        free(p);
    }
    else
    {
        q->next=p->next;
        free(p);
    }
}

while(p!=NULL)
{
    printf("%d",p->data);
    p = p->next;
}

    return 0;
}
