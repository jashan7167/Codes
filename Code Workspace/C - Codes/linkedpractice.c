#include<stdio.h>
#include<stdlib.h>

struct list
{
    int data;
    struct list *node;
}*head;
void search();
void search()
{
    int count = 0;
    printf("Enter the data you want to search:\n");
    int key;
    scanf("%d",&key);
    struct list *temp;
    temp = head;
    while(temp!=NULL)
    {
        if(temp->data == key)
        {
           
           printf("Data is found at %d node",count);
           break;
        }
        temp = temp->node;
        count++;
    }


}
void sortlinkedlist()
{
    struct list *cptr;
    struct list *pptr;
    pptr = head;
    
    int temp;
    while(pptr->node!=NULL)
    {
    cptr = pptr->node;
    while(cptr!=NULL)
    {
        if(pptr->data > cptr->data)
        {
            temp = pptr->data;
            pptr->data = cptr->data;
            cptr->data = temp;
        }
        cptr = cptr->node;
    }
      pptr = pptr->node;
    }
}
void deletionoflastnode();
void deletionoflastnode()
{
    struct list *temp,*ptr;
    temp = head;
    while(temp->node!=NULL)
    {
        ptr = temp;
        temp = temp->node;
    }
    ptr->node = NULL;
    free(temp);
    
}
void deletionofspecificnode(int key);
void deletionofspecificnode(int key)
{
    struct list *temp,*ptr;
    temp = head;
    while(temp->data!=key)
    {
        ptr = temp;
        temp = temp->node;
    }
    ptr->node = temp->node;
    temp->node = NULL;
    free(temp);

}
void deletionoffirstnode();
void deletionoffirstnode()
{
struct list *ptr;
ptr = head;
head = ptr->node;
free(ptr);
}
void insertbegnode();
void insertbegnode()
{
    struct list *ptr;
    ptr = (struct list *)malloc(sizeof(struct list));
    printf("Enter the data for the node you want to add in the beginning:\n");
    int num;
    scanf("%d",&num);
    ptr->data = num;
    ptr->node = head;
    head =  ptr;
}
void insernodeatmiddle(int key);
void insertnodeatmiddle(int key)
{
    struct list *temp,*ptr,*newnode;
    int num;
   
    newnode = (struct list *)malloc(sizeof(struct list));

    if(newnode == NULL)
    {
        printf("Memory not allocated");
        return;
    }
    else
    {
    temp = head;
    
    while(temp->data!=key)
    {
      ptr = temp;
      temp = temp->node;
    }
    printf("Enter the data for the node you want to insert:\n");
    scanf("%d",&num);
    newnode->data = num;
    newnode->node = temp;
    ptr->node = newnode;

    
    
}
}
void insertnodeatend();
void insertnodeatend()
{
    struct list *ptr1,*tmp,*newnode;
newnode = (struct list*)malloc(sizeof(struct list));
tmp = head;
while(tmp!=NULL)
{
    ptr1 = tmp;
    tmp = tmp->node;
}
printf("Enter the data for the node at the end:\n");
int nu1;
scanf("%d",&nu1);
newnode->data = nu1;
newnode->node = NULL;
ptr1->node = newnode;
}
void display();
void display()
{
    int count = 1;
    printf("Showing Linked List!\n");
      struct list *ptr;
    if(head == NULL)
    {
        printf("Memory not allocated!");
    }
    else
  
       ptr = head;
    while(ptr!=NULL)
    {
        printf("(%d):Data = %d\n",count,ptr->data);
        ptr = ptr->node;
        count++;
    }
}

void createlinkedlist(int n);
void createlinkedlist(int n)
{
    struct list *temp,*fnnode;
    
    head = (struct list *)malloc(sizeof(struct list));

int nu;
  printf("Enter the data for the 1 node:\n");
scanf("%d",&nu);
head->data = nu;
head->node = NULL;
temp = head;
    if(head == NULL)  //if compiler cannot allocate memory to the node then it stores NULL as an address in the pointer value
    {
        printf("Memory is not allocated kindly check the ram usage!");

    }
    else
  for(int i = 2;i<=n;i++)
  {

     fnnode = (struct list*)malloc(sizeof(struct list));
if(fnnode == NULL)
{
    printf("Memory not allocated");

}
else
printf("Enter the data for the %d node:\n",i);
scanf("%d",&nu);

fnnode->data = nu;
fnnode->node = NULL;

temp->node = fnnode;
temp = temp->node;
}
}
int main()
{
int choice;
int key;

printf("Enter the no of nodes you want in the linked list:\n");
int num;
scanf("%d",&num);
int b = 0;
createlinkedlist(num);
while(b!=1)
{
    printf("Enter your choice:\n 1:Display \n 2:Insertion of node at beginning:\n 3:Insertion of node at end \n 4:Insertion of node after a specific node \n 5:Deletion of first node:\n 6:Deletion of last node: \n 7:Deletion of specific node\n");
    scanf("%d",&choice);
switch(choice)
{
    case 1:
    display();
    break;
    case 2:
    insertbegnode();
    break;
    case 3:
    insertnodeatend();
    break;
    case 4:
    scanf("%d",&key);
    deletionoffirstnode(key);
    break;
    case 6:
    deletionoflastnode();
    break;
    case 7:
    scanf("%d",&key);
    deletionofspecificnode(key);
    break;
    case 8:
    search();
    break;
    case 9:
    sortlinkedlist();
    break;
    default:
    b = 1;
    printf("Wrong Choice");
}
}
}





