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
  void inordertraversal(struct node*root)
  {
           if(root == NULL)
           {
               return;
           }
           inordertraversal(root->left);
           printf("%d\n",root->data);
           inordertraversal(root->right);
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
    inordertraversal(root);
}