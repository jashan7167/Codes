#include <stdio.h>
#include <stdlib.h>
struct linkedlist
{
    int data;
    struct linkedlist *node;
}*head;
void display();
void display()
{
struct linkedlist *tmp;

if(head==NULL)
{
    printf("List is empty");
}
else

tmp = head;
while(tmp!=NULL)
{
    printf("Data = %d\n",tmp->data);
    tmp = tmp->node;
}

}
int createlinkedlist(int n);
int createlinkedlist(int n)
{
    struct linkedlist *fnnode,*tmp;
    int i,num;
 head = (struct linkedlist*)malloc(sizeof(struct linkedlist)); 
printf("Enter the data for the first node:\n");
     scanf("%d",&num);
     head->data = num;
     head->node = NULL;
       tmp = head;
 if(head == NULL)
 {
     printf("Memory not allocated");
 }
 else
     for(i = 2;i<=n;i++)
     {
         fnnode = (struct linkedlist*)malloc(sizeof(struct linkedlist));

         if(fnnode == NULL)
         {
             printf("Memory cannot be allocated");
         }
         else

          printf("Enter the data of the %d node:\n",i);
          scanf("%d",&num);
          fnnode->data = num;
          fnnode->node = NULL;
          tmp->node = fnnode;
          tmp = tmp->node;
     }
}
int main()
{
 int n;

 printf("Enter the no of nodes:\n");
 scanf("%d",&n);

 createlinkedlist(n);
 display();


}