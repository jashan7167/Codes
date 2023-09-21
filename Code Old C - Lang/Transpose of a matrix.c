#include<stdio.h>


int main()
{
int rows,columns;
printf("Enter the rows and columns of the mateix");
scanf("%d %d",&rows,&columns);
printf("Enter the elements of the matrix");
int mat[rows][columns];
for(int i=0;i<rows;i++)
{
    for(int j=0;j<columns;j++)
    {
        scanf("%d",&mat[i][j]);
    }
}




    int temp;
   for(int i=0;i<rows;i++)
   {
       for(int j=0;j<columns;j++)
       {
           if(i<j)
           {
    temp=mat[i][j];
    mat[i][j]=mat[j][i];
    mat[j][i]=temp;
       }
       }
   }
    for(int i=0;i<rows;i++)
   {
       for(int j=0;j<columns;j++)
       {
          printf("%d",mat[i][j]);
          printf("  ");
       }
       printf("\n");
   }
   
}