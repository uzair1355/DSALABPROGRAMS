#include <stdio.h>
#include <stdlib.h>

struct node
{

    int data;
    struct node *next;
};

void linklisttransversal(struct node *head)
{

    struct node *temp = head;

    do
    {
        printf("ELEMENT: %d\n", temp->data);
        temp = temp->next;
 
    } while (temp != head);
} 



struct node* insertasheadnodeincLL(struct node*head,int value){

struct node * ptr = (struct node *)malloc(sizeof(struct node));
ptr->data= value;

struct node * p = head ->next;
while(p->next !=head){

    

    p = p->next;

}
   
   // at this point the p points to the last node of the circular linklist
   ptr->next = head;
p->next = ptr;

head= ptr;

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
    fourth->next = head;
printf("linklist before insertion at first node\n");

    linklisttransversal(head);

head= insertasheadnodeincLL(head,77);

printf("linklist after insertion at first node\n");
  linklisttransversal(head);

}