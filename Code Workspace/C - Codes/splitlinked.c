#include <stdio.h>
#include <stdlib.h>

struct list
{
    int data;
    struct list *next;
}*head,*head1,*head2;
void split()
{
    struct list *ptr,*newnode1,*newnode2,*temp1,*temp2;
    ptr = head;
    temp1 = head1;
    temp2 = head2;
     head1 = (struct list *)malloc(sizeof(struct list));
      head2 = (struct list *)malloc(sizeof(struct list));
      head1->next = NULL;
      head2->next = NULL;
    while(ptr!=NULL)
    {
        if(ptr->data%2 == 0)
        {
            newnode1 = (struct list *)malloc(sizeof(struct list));
            newnode1->data = ptr->data;
            newnode1->next = temp1;
            temp1 = newnode1;
            head1 = newnode1;
        }
        else
        {
             newnode2 = (struct list *)malloc(sizeof(struct list));
             newnode2->data = ptr->data;
             newnode2->next = temp2;
             temp2 = newnode2;
             head2 = newnode2;
        }
    }
}
void displayeven()
{
    struct list *ptr;
    ptr = head1;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
    }
}
void displayodd()
{
    struct list *ptr1;
    ptr1 = head2;
    while(ptr1!=NULL)
    {
        printf("%d",ptr1->data);
    }
}

void display()
{
    struct list *ptr;
    ptr = head;
    while(ptr!=NULL)
    {
        printf("%d \t",ptr->data);
        ptr = ptr->next;
    }
}
void createlinkedlist(int n)
{
      struct list *temp,*newnode;
      head = (struct list *)malloc(sizeof(struct list));
      if(head == NULL)
      {
        return;
      }
      else
      {
      
      head->next = NULL;
      printf("Enter the data for the 1 node:\n");
      scanf("%d",&head->data);
      temp = head;
      for(int i=2;i<=n;i++)
      {
          newnode = (struct list *)malloc(sizeof(struct list));
          if(newnode == NULL)
          {
              break;
          }
          else
          {
          temp->next = newnode;
          temp = newnode;
          printf("Enter the data for the %d node:\n",i);
          scanf("%d",&newnode->data);
          }
      }
      
}
}
int main()
{
    int n;
    printf("Enter the no of nodes you want to make in the linked list:\n");
    scanf("%d",&n);
    createlinkedlist(n);
    split();
    displayeven();
    displayodd();
    display();
}