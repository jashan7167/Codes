#include <stdio.h>
#include <stdlib.h>

struct list
{
    int data;
    struct list *next;
    struct list *previous;
}*head;

void displayreverse();
void displayreverse()
{
    struct list *ptr,ptr2;
    ptr = head;
    while(ptr->next!=NULL)
    {
       ptr = ptr->next;
    }

    while(ptr!=NULL)
    {
     printf("%d\n",ptr->data);
     ptr = ptr->previous;
    }
    
}


void display();
void display()
{
    struct list *temp;
    temp  = head;
    while(temp!=NULL)
    {

        printf("%d\n",temp->data);
        temp = temp->next;
    }
}
void createdoublylinkedlist(int n);
void createdoublylinkedlist(int n)
{
    struct list *temp;
    struct list *newnode;
    head=(struct list *)malloc(sizeof(struct list));
    int n1;
    int num;
   temp=head;
   
   if(head==NULL)
   {
       return;
   }
   else
   printf("Enter the data for the first node");
   scanf("%d",&n1);
   temp->data=n1;
   temp->previous=NULL;
 for(int i=2;i<=n;i++)
 {
     newnode= (struct list *)malloc(sizeof(struct list));
     if(newnode==NULL)
     {
         break;
     }
     else
     {

         scanf("%d",&num);
         newnode->next =NULL;
         newnode->data = num;
         temp->next=newnode;
         newnode->previous = temp;
         temp = newnode;
     }
 }
}

int main()
{
    printf("Enter the no of nodes:\n");
    int n;
    scanf("%d",&n);


createdoublylinkedlist(n);
display();
printf("Printing the linked list from reverse:\n");
displayreverse();
}