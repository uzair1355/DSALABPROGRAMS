#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *top = 0;
void push(int data)
{

    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = top;

    top = newnode;
}

void display()
{

    if (top == 0)
    {
        printf("stack is emphty");
    }

    else
    {

        struct node *tmp = top;

        while (tmp != 0)
        {
            printf("%d", tmp->data);

            tmp = tmp->next;
        }
    }
}

void peek()
{

    if (top == 0)
    {
        printf("emphty stack");
    }
    else
    {

        printf("top element in stack :%d", top->data);
    }
}
void pop()
{

    if (top == 0)
    {
        printf("stack is emphty");
    }
    else
    {

        printf("element to be poped off the stack : %d", top->data);

        struct node *tmp = top;

        top = top->next;
        free(tmp);
    }
}

int main()
{

    push(2);
}