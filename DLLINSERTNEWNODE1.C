#include <stdio.h>
#include <stdlib.h>

struct node
{

    int data;
    struct node *pre;
    struct node *next;
};

struct node* addnew_node(struct node* head,int value ){


struct node *temp = (struct node *)malloc(sizeof(struct node));
 
 temp->pre=NULL;
 temp->data=value;
 temp->next=NULL;


 return head;




}

int main(){

struct  node * head = NULL;

head = addnew_node(head ,45);

printf(" elements :%d\n",head->data);

return 0;




}