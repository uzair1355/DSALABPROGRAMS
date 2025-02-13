#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front = 0;
struct node *rear = 0;
void enqueue(int x)
{

    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = 0;

    if (front == 0 && rear == 0)
    {
        front = rear = newnode;
    }

    else
    {

        rear->next = newnode;
        rear = newnode;
    }
}

void display()
{

    if (front == 0 && rear == 0)
    {
        printf("emphty queue");
    }

    else
    {
        struct node *tmp;
        while (tmp != 0)
        {
            tmp = front;
            printf("%d", tmp->data);
            tmp = tmp->next;
        }
    }
}

void dequeue()
{

    if (front == 0 && rear == 0)
    {
        printf("emphty queue");
    }

    struct node *tmp = front;

    front = front->next;
    free(tmp);
}

void peek()
{

    if (front == 0 && rear == 0)
    {
        printf("emphty queue");
    }

    else
    {

        printf("%d", front->data);
    }
}

int main()
{
    return 0;
}