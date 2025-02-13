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

        printf(" ELEMENT :%d\n", ptr->data);
        ptr = ptr->next;
    }
}
void insertbegin(struct node **head_pointer, int data)
{
    // *head_pointer is head;

    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = *head_pointer;
    ptr->data = data;

    *head_pointer = ptr;

}

void insertatend(struct node *head, int data)
{

    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;

    struct node *p = head;

    while (p->next != NULL)
    {

        p = p->next;
    }

    p->next = ptr;
    ptr->next = NULL;
  
}

struct node *insertatindex(struct node *head, int data, int index)
{

    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;

    struct node *p = head;
    int i = 0;

    while (i != index - 1)
    {

        p = p->next;
        i++;
    }

    ptr->next = p->next;
    p->next = ptr;

    return head;
}

struct node *insertafternode(int data, struct node *pre_node)
{

    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;


    ptr->next = pre_node->next;
    pre_node->next = ptr;
   
}

int main()
{

    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 12;
    head->next = second;

    second->data = 23;
    second->next = third;

    third->data = 34;
    third->next = fourth;

    fourth->data = 66;
    fourth->next = NULL;

    // before insertion
    linklisttransversal(head);
    printf("Element after insertion after node\n");
    insertbegin(&head, 90) ;
    printf("data at head: %d\n", head->data);
    // head = insertatindex(head, 55, 3);
    // insertafternode(11, third);
    // after insertion

    linklisttransversal(head);
}