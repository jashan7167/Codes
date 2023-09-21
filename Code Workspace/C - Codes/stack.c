#include<stdio.h>
#include<stdlib.h>
int stack[10];
int top = -1;
int size = 10;

struct list
{
     int data;
     struct list *next;
}*top1;

void pushlinked()
{
    struct list *newnode;
    newnode = (struct list *)malloc(sizeof(struct list));
    if(top1== NULL)
    {
        newnode->next = NULL;
        top1 = newnode;
        printf("Enter the data you want to push:\n");
        scanf("%d",&newnode->data);
    }
    else{
        newnode->next = top1;
        top1 = newnode;
        scanf("%d",&newnode->data);
    }
}
void poplinked()
{
    struct list *ptr;
    int val;
    if(top1 == NULL)
    {
        printf("Underflow");
    }
    else
    {
     val = top1->data;
    printf("%d",val);
    ptr = top1;
    top1 = top1->next;
}
}
void push(int num)
{
    if(top == size -1)
    {
        printf("Stack Full");
    }
    
    else
    {
        top = top + 1;
        stack[top] = num;
    }
}

int pop()
{
      if(top == -1)
      {
          printf("Stack Empty\n");
      }
      else
      {
          return(stack[top]);
          top = top - 1;
      }
      
}

int main()
{
    int b=0;
     int choice,num,x;
     printf("*****Menu*****\n 1.)Push \n 2.) Pop \n 3.)Exit");
     printf("\n");
     while(b!=1)
     {
     printf("Enter your choice:\n");
     scanf("%d",&choice);
     switch(choice)
     {
         case 1:
         printf("Enter the element you want to push into stack:\n");
         scanf("%d",&num);
         push(num);
         break;
         case 2:
          x = pop();
         printf("%d\n",x);
         break;
         case 3:
          pushlinked();
          break;
        case 4:
           poplinked();
           break;
         default:
         b = 1;
         break;
     }
}
}