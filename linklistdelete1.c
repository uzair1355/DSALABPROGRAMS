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

struct node *deleteatbegin(struct node *head)
{

    struct node *ptr = head;
    head = head->next;
    free(ptr);

    return head;
}

struct node *deleteatindex(struct node *head, int index)
{

    struct node *p = head;
    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
    }

    struct node *q = p->next;

    p->next = q->next;
    free(q);

    return head;
}

struct node *deleteatend(struct node *head)
{

    struct node *q = head;

    while (q->next->next != NULL)
    {

        q = q->next;
    }

    struct node *p = q->next;
    q->next = NULL;

    free(p);

    return head;
}

struct node *deleteatvalue(struct node *head, int value)
{

 if (head->data == value) {
        struct node * temp = head;
        head = head->next; // Move head to the next node
        free(temp);        // Delete the first node
        return head;       // Return the new head
    }
    struct node * p = head;
    struct node * q = head->next;

    while (q != NULL && q->data != value)
    {

        q = q->next;
        p = p->next;

    }

    if (q == NULL)
    {
        printf("Value %d not found in this linklist \n", value);
        return head;
    }


    p->next = q->next;
    free(q);

    return head;
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
    printf("Element before deletion at value  \n");
    linklisttransversal(head);
    printf("Element after deletion at value\n");

    head = deleteatvalue(head, 12);

    linklisttransversal(head);
}