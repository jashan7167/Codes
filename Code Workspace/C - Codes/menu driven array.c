#include<stdio.h>


void add()
{
    int r1,c1;
    int r2,c2;
    //Additon of the matrix
  printf("Enter the rows and columns for matrix 1");
  scanf("%d%d",&r1,&c1);
   printf("Enter the rows and columns for matrix 2");
  scanf("%d%d",&r2,&c2);
  int m1[r1][c1];
  int m2[r2][c2];
   printf("Enter the elements of matrix 1");
    for(int i=0;i<r1;i++)
    {
    for(int j=0;j<c1;j++)
    {
        scanf("%d",&m1[i][j]);
    }
    }
     printf("Enter the elements of matrix 2");
    for(int i=0;i<r2;i++)
    {
    for(int j=0;j<c2;j++)
    {
        scanf("%d",&m2[i][j]);
    }
    }
  if((r1==r2) && (c1==c2))
  {
     
      for(int i=0;i<r1;i++)
    {
    for(int j=0;j<c1;j++)
    {
        m3[i][j]=m1[i][j]+m2[i][j];
    }
  }
  for(int i=0;i<r1;i++)
    {
    for(int j=0;j<c1;j++)
    {
        printf("%d",&m3[i][j]);
        printf(" ");
    }
    printf("\n");
  }
}
else
printf("Addition not possible");
}

void subtract()
{
    int r1,c1;
    int r2,c2;
 printf("Enter the rows and columns for matrix 1");
  scanf("%d%d",&r1,&c1);
   printf("Enter the rows and columns for matrix 2");
  scanf("%d%d",&r2,&c2);
   int m1[r1][c1];
  int m2[r2][c2];
  printf("Enter the elements of matrix 1");
    for(int i=0;i<r1;i++)
    {
    for(int j=0;j<c1;j++)
    {
        scanf("%d",&m1[i][j]);
    }
    }
     printf("Enter the elements of matrix 2");
    for(int i=0;i<r2;i++)
    {
    for(int j=0;j<c2;j++)
    {
        scanf("%d",&m2[i][j]);
    }
    }
 int m3[10][10];
  if((r1==r2) && (c1==c2))
  {
      for(int i=0;i<r1;i++)
    {
    for(int j=0;j<c1;j++)
    {
        m3[i][j]=m1[i][j]-m2[i][j];
    }
  }
  for(int i=0;i<r1;i++)
    {
    for(int j=0;j<c1;j++)
    {
        printf("%d",&m3[i][j]);
        printf(" ");
    }
    printf("\n");
  }
}
else
printf("Subtraction not possible");
}

void multiply()
{
    //Multiplication of the matrix
    
    int r1,c1;
    int r2,c2;
printf("Enter the rows and columns for matrix 1");
  scanf("%d%d",&r1,&c1);
   printf("Enter the rows and columns for matrix 2");
  scanf("%d%d",&r2,&c2);
   int m1[r1][c1];
  int m2[r2][c2];
  printf("Enter the elements of matrix 1");
    for(int i=0;i<r1;i++)
    {
    for(int j=0;j<c1;j++)
    {
        scanf("%d",&m1[i][j]);
    }
    }
     printf("Enter the elements of matrix 2");
    for(int i=0;i<r2;i++)
    {
    for(int j=0;j<c2;j++)
    {
        scanf("%d",&m2[i][j]);
    }
    }
int m3[10][10];
  if(c1==r2)
  {
     int sum=0;
     for(int i=0;i<r1;i++)
     {
         for(int j=0;j<c2;j++)
         {
             m3[i][j]=0;
             for(int k=0;k<c1;k++)
             {
              m3[i][j]+=m1[i][k]*m2[k][j];
             } 
         }
     }
         printf("Resultant Matrix: \n");
        for(int i=0;i<r1;i++)
        {
         for(int j=0;j<c2;j++)
         {
          printf("%d",&m3[i][j]);
          printf(" ");
       }
       printf("\n");
        }
  }

     else 
      printf("Multiplication not possible");
}
int main()
{
    int b=1;
        printf("enter 1 for addition\n");
        printf("enter 2 for subtraction\n");
        printf("enter 3 for multiplication\n");
        printf("enter 0 to exit\n");
        printf("enter your choice\n");
          
    while(b)
    {
        int a;
        scanf("%d",&a);
           switch (a)
           {
               case 1:add();
                   break;
               case 2:subtract();
                   break;
               case 3:multiply();
                   break;
               case 4:b=0;
                   break;
               case 5:printf("Default enter correct key\n ");
                   
           }
    }
}

    
