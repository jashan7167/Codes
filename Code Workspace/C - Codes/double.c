#include <stdio.h>
#include <stdlib.h>
struct list 
{
    int data;
    struct list *next;
    struct list *prev;
}*head;
void deletingmidnode()
{
    struct list *ptr,*temp;
    ptr = head;
    int nu;
    printf("Enter the node data which you want to delete:\n");
    scanf("%d",&nu);
     while(ptr->data!=nu)
     {
        ptr = ptr->next;
     }
     temp = ptr->prev;
     temp->next = ptr->next;
     free(ptr);
}
void deletelastnode()
{
    printf("Deletion of last node:\n"); 
    struct list *ptr,*temp;
    ptr = head;
    while(ptr->next!=NULL)
    {
      ptr = ptr->next;
    }
    temp = ptr->prev;
    temp->next = NULL;
    free(ptr);

}
void deletefirstnode()
{
    printf("Deletion of first node initiated!\n");
    struct list *ptr,*temp;
    temp = head;
    ptr = temp->next;
    ptr->prev = NULL;
free(temp);
 head = ptr;
}
void insertinmiddle()
{
    struct list *temp,*newnode,*ptr;
     ptr = head;
    newnode = (struct list *)malloc(sizeof(struct list));
    int n;
    printf("Enter the node data before which you want to insert your node:\n");
    scanf("%d",&n);
    while(ptr->data!=n)
    {
      ptr = ptr->next;
    }
    printf("Enter the data for the newnode:\n");
    scanf("%d",&newnode->data);
    temp = ptr->prev;
    newnode->next = ptr;
    newnode->prev = temp;
    temp->next = newnode;
    ptr->prev = newnode;
}
void insertatend()
{
    struct list *ptr;
    struct list *temp;
    struct list *newnode;
    ptr = head;
    while(ptr->next!=NULL)
    {
        ptr = ptr->next;
    }
    temp = ptr->prev;
    newnode = (struct list *)malloc(sizeof(struct list));
    printf("Enter the data for the newnode you want to insert at the end:\n");
    scanf("%d",&newnode->data);
    ptr->next = newnode;
    newnode->next = NULL;
    newnode->prev = ptr;
}
void insertatbeginning()
{
    struct list *newnode;
    newnode = (struct list *)malloc(sizeof(struct list));
    newnode->next = head;
    newnode->prev = NULL;
    printf("Enter the data for the newnode you want to insert at beginning:\n");
    scanf("%d",&newnode->data);
    head = newnode;
}
void displayreverse()
{
 struct list *ptr;
 ptr = head;
 while(ptr->next!=NULL)
 {
     ptr = ptr->next;
 }
 while(ptr!=NULL)
 {
     printf("%d\t",ptr->data);
     ptr=ptr->prev;
 }
 
}

void displayforward()
{
    struct list *temp;
    temp = head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp = temp->next;
    }
}

void createlinkedlist(int n)
{
struct list *temp;
struct list *newnode;

head = (struct list *)malloc(sizeof(struct list));

temp = head;
if(head == NULL)
{
return;
}
else
{
    head->next = NULL;
    head->prev = NULL;
    printf("Enter the data for 1 node:\n");
    scanf("%d",&head->data);

    for(int i=2;i<=n;i++)
    {
        newnode = (struct list *)malloc(sizeof(struct list));
        if(newnode==NULL)
        {
        break;
        }
        else
        printf("Enter the data for %d node:\n",i);
        scanf("%d",&newnode->data);
        newnode->next = NULL;
        temp->next = newnode;
        newnode->prev = temp;
        temp = newnode;
    }
}
}



int main()
{
  int num;
  printf("Enter the no of nodes you want to make:\n");
  scanf("%d",&num);

  createlinkedlist(num);
  displayforward();
  printf("\n");
displayreverse();
printf("\n");

insertatbeginning();
displayforward();

printf("\n");
insertatend();
displayforward();

printf("\n");
insertinmiddle();
displayforward();

deletefirstnode();
displayforward();

deletelastnode();
displayforward();

deletingmidnode();
displayforward();
}