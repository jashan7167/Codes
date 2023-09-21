#include<stdio.h>


int scanelements(int ,int ,int ,int ,int arr1[10][10],int arr2[10][10]);

int scanelements(int rr1,int cc1,int rr2,int cc2,int arr1[10][10],int arr2[10][10])
{
    printf("Enter the elements of matrix 1");
    for(int i=0;i<rr1;i++)
    {
    for(int j=0;j<cc1;j++)
    {
        scanf("%d",&arr1[i][j]);
    }
    }
    for(int i=0;i<rr2;i++)
    {
    for(int j=0;j<cc2;j++)
    {
        scanf("%d",&arr2[i][j]);
    }
    }
}

int main()
{
    int c=0;
    int r1,c1,r2,c2;
    int m3[10][10];
    int m1[r1][c1];
  int m2[r2][c2];
    printf("Enter your choice: \n 1:Add \n 2: Subtract \n 3: Multiply");
scanf("%d",&c);
switch(c)
{
  case 1:
  //Additon of the matrix
  printf("Enter the rows and columns for matrix 1");
  scanf("%d%d",&r1,&c1);
   printf("Enter the rows and columns for matrix 2");
  scanf("%d%d",&r2,&c2);

  if((r1==r2) && (c1==c2))
  {
     
      scanelements(r1,c1,r2,c2,m1,m2);
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
break;
 
 case 2:
 //Subtraction of the matrix
  printf("Enter the rows and columns for matrix 1");
  scanf("%d%d",&r1,&c1);
   printf("Enter the rows and columns for matrix 2");
  scanf("%d%d",&r2,&c2);
  
 
  if((r1==r2) && (c1==c2))
  {
      scanelements(r1,c1,r2,c2,m1,m2);
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
case 3:
//Multiplication of the matrix
printf("Enter the rows and columns for matrix 1");
  scanf("%d%d",&r1,&c1);
   printf("Enter the rows and columns for matrix 2");
  scanf("%d%d",&r2,&c2);
  

  if(c1==r2)
  {
     scanelements(r1,c1,r2,c2,m1,m2);
     int sum=0;
     for(int i=0;i<r1;i++)
     {
         for(int j=0;j<c2;j++)
         {
             for(int k=0;k<c1;k++)
             {
              int prod=m1[i][k]*m2[k][j];
               sum=sum+prod;  
             }
             m3[i][j]=sum;
             sum=0;
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
       case 4:
       break;

}
}

  

