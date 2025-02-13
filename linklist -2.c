#include <stdio.h>
#include <stdlib.h>

struct node
{

    int data;
    struct node *next;
};

void linklisttransversal(struct node *ptr)
{

    while (ptr != NULL)
    {

        printf(" ELEMENT :%d", ptr->data);
        ptr = ptr->next;
    }
}

struct node *insertbegin(struct node *head, int data)
{

    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;

    head = ptr;
    

    return head;
}

int main()
{

    struct node *head;
    struct node *second;
    struct node *third;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 12;
    head->next = second;

    second->data = 23;
    second->next = third;

    third->data = 34;
    third->next = NULL;

    // before insertion
    linklisttransversal(head);

    head = insertbegin(head, 22);

    // after insertion

    linklisttransversal(head);
}