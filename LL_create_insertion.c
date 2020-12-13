#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;   
};
// Display the linked list
void display(struct Node *temp)
{
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
// Creating in linked list
void create()
{
    struct Node *first,*last;
    first=(struct Node*)malloc(sizeof(struct Node));
    int x;
    scanf("%d",&x);
    first->data=x;
    last=first;
    last->next=NULL;
    scanf("%d",&x);
    while (x!=-1)
    {
        /* code */
        struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=x;
        last->next=temp;
        last=temp;
        last->next=NULL;
        scanf("%d",&x);
        
    }
    display(first);
    
}
int main()
{
    create();
}