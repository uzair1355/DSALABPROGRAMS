#include <stdio.h>
#include <stdlib.h>

struct node
{

    int data;
    struct node *pre;
    struct node *next;
};

void doublelinklisttransversal(struct node *head )
{

//front triverse
struct node *temp = head;

    while (temp != NULL)
    {
        printf("ELEMENTS :%d\n", temp->data);

       temp = temp->next;

    }

//reverse tiverse

// => here u have give fourth node to this function while calling :

    // struct node *temp = fourth;

    // while (temp != NULL)
    // {
    //     printf("ELEMENTS :%d\n", temp->data);

    //    temp = temp->pre;

    // }
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

    head->pre = NULL;
    head->data = 12;
    head->next = second;

    second->pre = head;
    second->data = 23;
    second->next = third;

    third->pre = second;
    third->data = 34;
    third->next = fourth;

    fourth->pre = third;
    fourth->data = 66;
    fourth->next = NULL;

    doublelinklisttransversal(head);

    // head= insertasheadnodeincLL(head,77);

    // printf("linklist after insertion at first node\n");
    //   linklisttransversal(head);
}