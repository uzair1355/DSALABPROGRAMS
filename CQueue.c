#include <stdio.h>
#define size 5
int queue[size];

int front = -1;
int rear = -1;

void enqueue(int x)
{

    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else if ((rear + 1) % size == front)
    {
        printf("overflow condition");
    }
    else
    {
        rear = (rear + 1) % size;
        queue[rear] = x;
    }
}

void dequeue()
{

    if (front == -1 && rear == -1)
    {
        printf("underflow conditon");
    }

    else if (rear == front)
    {
        front = rear = -1;
    }

    else
    {

        front = (front + 1) % size;
    }
}

void display()
{

    int i = front;
    if (front == -1 && rear == -1)
    {
        printf("underflow conditon");
    }

    else
    {

        while (i != rear)
        {

            printf("%d", queue[i]); // rest here printed
            i = (i + 1) % size;
        }
        printf("%d", queue[rear]);  //last element to print
    }
}
int main()
{
}