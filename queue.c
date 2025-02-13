#include <stdio.h>
#define size 5
int queue[size];

int front = -1;
int rear = -1;

void enqueue(int x)
{

    if (rear == size - 1)
    {
        printf("overflow condition");
    }

    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }

    else
    {

        rear++;
        queue[rear] = x;
    }
}

void dequeue()
{

    if (front == -1 && rear == -1)
    {

        printf("underflow conditon");
    }

    else if (front == rear)
    {

        front = rear = -1;
    }
    else
    {

        front++;
    }
}

void display()
{
    int i;

    if (front == -1 && rear == -1)
    {

        printf("underflow conditon");
    }

    else
    {

        for (int i = front; i <= rear; i++)
        {
            printf("%d", queue[i]);
        }
    }
}
void peek()
{
    if (front == -1 && rear == -1)
    {

        printf("underflow conditon");
    }
    else
    {
        printf("%d", queue[front]);
    }
}
int main()
{
    // insert from rear and rest display/delete from front always!

    enqueue(2);

    return 0;
}