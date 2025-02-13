#include <stdio.h>
#define size 5
int top = -1;
int stack[size];

void push()
{
    int x;

    printf("enter the value to insert");
    scanf("%d", &x);

    if (top == size - 1)
    {

        printf("stack overflow");
    }

    else
    {
        top++;
        stack[top] = x;
    }
}

void pop()
{

    if (top == -1)
    {
        printf("underflow condition");
    }
    else
    {
        top--;
    }
}
void peek()
{

    if (top == -1)
    {
        printf("stack emphty");
    }

    else
    {
        printf("the top element in the stack is : %d", stack[top]);
    }
}

void display()
{

    if (top == -1)
    {
        printf("no element in the stack");
    }

    for (int i = top; i >= 0; i--)
    {
        printf("%d", stack[i]);
    }
}

int main()
{

    for (int i = 0; i < 5; i++)
        push();

    return 0;
}