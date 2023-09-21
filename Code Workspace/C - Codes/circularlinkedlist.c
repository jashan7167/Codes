#include <stdio.h>
#include <stdlib.h>

struct list
{
    int data;
    struct list *node;
}*head;

void insertnodebeg();
void insertnodebeg()
{
    struct list *temp,*newnode,*ptr;
    temp = head;
    do
    {
        ptr = temp;
        temp = temp->node;
    } while (temp!=head);
    newnode = (struct list *)malloc(sizeof(struct list));
    if(newnode == NULL)
    {
        printf("Memory not allocated");
    }
    else

   printf("Enter the new node data you want to insert at the beggining:\n");
   scanf("%d",&newnode->data);
   newnode->node = head;
     head = newnode;
   ptr->node = head;
}

void createcircularlinkedlist(int n);
void createcircularlinkedlist(int n)
{
struct list *temp,*fnnode;
head = (struct list*)malloc(sizeof(struct list));
temp = head;
if(head == NULL)
{
    printf("Memory not allocated");
}
else
printf("Enter the data for the first node:\n");
scanf("%d",&head->data);

for(int i = 2 ;i<=n;i++)
{
    fnnode = (struct list*)malloc(sizeof(struct list));
    if(fnnode == NULL)
    {
        printf("Memory not allocated");
        break;
    }
    else
    printf("Enter the data for the %d node:\n",i);
    scanf("%d",&fnnode->data);
    fnnode->node = head;
    temp->node = fnnode;
    temp = temp->node;

}
}
void display();
void display()
{
    struct list *temp;
    temp = head;
    do
    {
        printf("Data = %d\n",temp->data);
    temp = temp->node;
    }while(temp!=head);
}
int main()
{
int n;
printf("Enter the no of nodes you want to make:\n");
scanf("%d",&n);

createcircularlinkedlist(n);
display();
printf("Inserting the node at the begggining inititated:\n");
insertnodebeg();
display();
}