#include <stdio.h>
#include <stdlib.h>
struct list
{
    char str[100];
    struct list *next;
}*head;


void display();
void display()
{
struct list*temp;
temp = head;
while(temp!=NULL)
{
    printf("%s",temp->str);
    temp = temp->next;
}
}
void createlinkedlist(int n);
void createlinkedlist(int n)
{
    struct list*temp,*fnnode;
  head =  (struct list*)malloc(sizeof(struct list));
        printf("Enter the data for first node:\n");
        scanf("%s",head->str);
       
    if(head == NULL)
    {
        printf("Memory not allocated");
    }
    else
    {
      

       temp = head;

     for(int i = 2;i<=n;i++)
     {
         fnnode = (struct list *)malloc(sizeof(struct list));
         if(fnnode == NULL)
         {
             printf("Memory not allocated");
             return;
         }
         else
         {
             printf("Enter the data for the %d node:\n",i);
             gets(fnnode->str);
             fnnode->next = NULL;
             temp->next = fnnode;
             temp = temp->next;
         }
     }
    }
}






int main()
{
  int no;
  printf("Enter the no of nodes you want to make:\n");
  scanf("%d",&no);
  createlinkedlist(no);
display();
}
