#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};

void inserAfter(struct Node* prev_node, int new_data)
{
    if (prev_node == NULL)
    {
        printf("The given previous cannot be NULL\n");
        return;
    }
    struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data=new_data;
    new_node->next=prev_node->next;
    prev_node->next=new_node;
}

void insertAtFront(struct Node** head_ref, int new_data)
{
    struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data=new_data;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
}

void insetATEnd(struct Node** head_ref, int new_data)
{
    struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    struct Node* last = *head_ref;
    new_node->next = NULL;
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }
    while(last->next != NULL){
        last = last->next;
    }
    last->next = new_node;
}

void print(struct Node* node)
{
    while (node != NULL)
    {
        printf(" %d", node->data);
        node = node->next;
    }
    printf("\n");
}
int main()
{
    struct Node* head = NULL;
    insertAtFront(&head,1);
    insertAtFront(&head,2);
    insertAtFront(&head,3);
    inserAfter(head, 8);
    insertAtFront(&head,4);
    insertAtFront(&head,5);
    insetATEnd(&head,15);
    insertAtFront(&head,6);
    print(head);
    insetATEnd(&head,20);
    print(head);
}
