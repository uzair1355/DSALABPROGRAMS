#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *L;
    struct node *R;
};

struct node *create()
{

    int x;

    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the data (enter -1 for no node)");
    scanf("%d", &x);
    if (x == -1)
    {
        return 0;
    }

    newnode->data = x;
    printf("enter the left child of %d : ", x);

    newnode->L = create();

    printf("enter the right child of %d : ", x);

    newnode->R = create();

    return newnode;
}

void POSTORDER(struct node *root)
{
    if (root == 0)
    {

        return;
    }

    POSTORDER(root->L); // LEFT CALL

    POSTORDER(root->R); // RIGHT CALL

    print("%d", root->data); // PRINT
}
void INORDER(struct node *root)
{
    if (root == 0)
    {
        return;
    }

    INORDER(root->L); // LEFT CALL

    printf("%d", root->data); // PRINT

    INORDER(root->R); // RIGHT CALL
}
void PREORDER(struct node *root)
{

    if (root == 0)
    {
        return;
    }

    printf("%d", root->data); // PRINT

    PREORDER(root->L); // LEFT CALL
    PREORDER(root->R); // RIGHT CALL
}

int main()
{

    struct node *root = NULL;

    root = create();
    printf("the preorder of this binary tree is: ");
    PREORDER(root);

    return 0;
}