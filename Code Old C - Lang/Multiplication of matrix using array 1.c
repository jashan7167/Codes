#include<stdio.h>

int main()
{
    int rowone,columnone,rowtwo,columntwo;
    printf("Enter the rows and columns of the first matrix:\n");
    scanf("%d %d",&rowone,&columnone);
    printf("Enter the rows and columns of the second matrix:\n");
    scanf("%d %d",&rowtwo,&columntwo);

    int mat1[rowone][columnone];
    int mat2[rowtwo][columntwo];
int resmat[10][10];

if(columnone==rowtwo)
{
    printf("Enter the elements of the first matrix:\n");
for(int i=0;i<rowone;i++)
        {
            for(int k=0;k<columnone;k++)
            {
               scanf("%d",&mat1[i][k]);
            }
        }

printf("Enter the elements of the second matrix:\n");
for(int i=0;i<rowtwo;i++)
        {
            for(int k=0;k<columntwo;k++)
            {
               scanf("%d",&mat2[i][k]);
            }
        }
}

        else
    printf("Multiplication is not possible");
    int sum=0,i,j,k;
for(int i=0;i<rowone;i++)
    {
        for(int j=0;j<columntwo;j++)
        {
            for(int k=0;k<rowtwo;k++)
            {

            int prod=mat1[i][k]*mat2[k][j];
            sum=sum+prod;  
            } 
            resmat[i][j]=sum;
            sum=0;  
    }
}
    
    printf("Resultant Matrix(Multiplication of both the matrix) is:\n");
    for(int i=0;i<rowone;i++)
        {
            for(int k=0;k<columntwo;k++)
            {
                printf("%d",resmat[i][k]);
                printf(" ");
            }
            printf("\n");
        }
}