#include <stdio.h>
#include <stdlib.h>

struct list
{
    int data;
    struct list *next;
}*head;

void addatbeg(struc)

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
    display();
}