#include <stdio.h>
#include <stdlib.h>

struct node
{

    int data;
    struct node *pre;
    struct node *next;
};

struct node *addnew_node(struct node *head, int value)
{

    struct node *temp = (struct node *)malloc(sizeof(struct node));

    temp->pre = NULL;
    temp->data = value;
    temp->next = NULL;

    head = temp;

    return head;
}

struct node *addbegin(struct node *head, int data)
{

    if (head == NULL)
    {

        struct node *head = (struct node *)malloc(sizeof(struct node));
        head->pre = NULL;

        head->data = data;

        head->next = NULL;

        return head;
    }

    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->pre = NULL;
    temp->data = data;
    temp->next = NULL;

    temp->next = head;
    head->pre = temp;

    head = temp;

    return head;
}

struct node *addend(struct node *head, int data)
{

    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->pre = NULL;
    temp->data = data;
    temp->next = NULL;

    struct node *p = head;

    while (p->next != NULL)
        p = p->next;

    p->next = temp;
    temp->pre = p;
}

struct node *addbetween(struct node *head, int data, int index)
{

    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->pre = NULL;
    temp->data = data;
    temp->next = NULL;

    struct node *p1 = head;
    struct node *p2 = head->next;

    int i = 0;

    for (i = 0; i < index; i++)
    {

        p2 = p2->next;
        p1 = p1->next;
    }

    p1->next = temp;
    p2->pre = temp;

    temp->pre = p1;
    temp->next = p2;

    return head;
}

struct node *delatend(struct node *head)
{

    struct node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }

    p->pre->next = NULL;

    // struct node* q = p->next;

    // p->next = NULL;
    // q->pre= NULL;
    free(p);

    return head;
}

struct node *delatk(struct node *head, int k)
{

    struct node *p = head;

    for (int i = 1; i < k; i++)
    {
        p = p->next;
    }

    struct node *q = p->next;

    q->next->pre = p;
    p->next = q->next;

    // q->pre=NULL;
    // q->next=NULL;

    free(q);

    return head;
}

int main()
{

    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    head->pre = NULL;
    head->data = 12;
    head->next = second;

    second->pre = head;
    second->data = 13;
    second->next = third;

    third->pre = second;
    third->data = 14;
    third->next = fourth;

    fourth->pre = third;
    fourth->data = 15;
    fourth->next = NULL;

    // head = delatend(head);
    head = delatk(head, 2);

    struct node *ptr = head;

    while (ptr != NULL)
    {

        printf("%d-> ", ptr->data);
        ptr = ptr->next;
    }

    return 0;
}