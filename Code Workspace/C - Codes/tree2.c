#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>


struct node
{
    int data;
    struct node *left;
    struct node *right;
}*root;

struct node *createnode(int key);
struct node *createnode(int key)
{
     struct node *newnode =(struct node *)malloc(sizeof(struct node));
     newnode->data = key;
     newnode->left = NULL;
     newnode->right = NULL;
     return newnode;
}
struct node* deleteanode(struct node *root,int val)
{
    struct node *temp;
    if(root==NULL)
    {
        printf("Val not found");
    }
    
    if(val<root->data)
    {
       root->left = deleteanode(root->left,val);
    }
    else if(val > root->data)
    {
      root->right =   deleteanode(root->right,val);
    }
    else
      temp = root;
    if(root->left ==NULL && root->right ==NULL)
    {
        root = NULL;
    }
    else if(root->left!=NULL)
    {
        root = root->left;
    }
    else
    root = root->right;
     

     return(root);
    

}
int noofnodes(struct node *root);
int noofnodes(struct node *root)
{
    if(root == NULL)
    {
         return root;
    }
    int lnode = noofnodes(root->left);
    int rnode = noofnodes(root->right);

    return 1 + noofnodes(root->left) + noofnodes(root->right);
}

int height(struct node *root);
int height(struct node *root)
{
   if(root == NULL)
   {
       return -1;
   }

   int lheight = height(root->left);
   int rheight = height(root->right);


   if(lheight>rheight)
   {
return lheight + 1;
   }
   else
   return rheight + 1;
}
struct node *insertnode(struct node *root,int k);
struct node *insertnode(struct node *root,int k)
{
    if(root == NULL) //when root is null insert a newnode
    {
        struct node *temp = createnode(k);
        return temp;
    }
  else if(root->data <= k)
  {
      root->right = insertnode(root->right,k);
  }
  else
  {
      root->left = insertnode(root->left,k);
  }
    return root; //at returning time of recursion it will go back to the first call to give us the root value
}
  void preordertraversal(struct node*root)
  {
           if(root == NULL)
           {
               return;
           }
           preordertraversal(root->left);
           preordertraversal(root->right);
           printf("%d\n",root->data);
           printf(" ");
  }

int main()
{
    int n;
    scanf("%d",&n);
    int value;
    for(int i = 0 ;i<n;i++)
    {
        scanf("%d",&value);
        root = insertnode(root,value);
    }
    int val;
    int b = 1;
    int choice;
    int a;
    while(b=1)
    {
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            preordertraversal(root);
            break;
            case 2:
            
            a = height(root);
             printf("Height = %d",a);
            break;
            case 3:
            a  = noofnodes(root);
            printf("No of nodes = %d",a);
            break;
            case 4:
            scanf("%d",&val);
            deleteanode(root,val);
            break;
            default:
            b = 0;
        }
    }
    
}