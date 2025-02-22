#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
struct node * createnode(int value)
{
    struct node * ptrnode=((struct node *)malloc(sizeof(struct node)));
    ptrnode->data=value;
    ptrnode->next=NULL;
    return ptrnode;

};
void insertnode (struct node **head,struct node *ptrnode)
{
    if(*head==NULL)
    {
        *head=ptrnode;
    }
    else
    {
        struct node *temp=*head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=ptrnode;
    }
}
void printlist(struct node *head)
{
    struct node *ptr=ptrhead;
    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
}

