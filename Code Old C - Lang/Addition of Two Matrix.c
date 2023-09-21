#include<stdio.h>

int main()
{
    int a1,b1,a2,b2;
    printf("Enter the rows and columns of the first matrix:\n");
    scanf("%d %d",&a1,&b1);
    printf("Enter the rows and columns of the second matrix:\n");
    scanf("%d %d",&a2,&b2);

    int mat1[a1][b1];
    int mat2[a2][b2];
int resmat[a1][b1];

if(a1==a2 && b1==b2)
{
    printf("Enter the elements of the first matrix:\n");
for(int i=0;i<a1;i++)
        {
            for(int k=0;k<b1;k++)
            {
               scanf("%d",&mat1[i][k]);
            }
        }

printf("Enter the elements of the second matrix:\n");
for(int i=0;i<a1;i++)
        {
            for(int k=0;k<b1;k++)
            {
               scanf("%d",&mat2[i][k]);
            }
        }
}

        else
    printf("Addition is not possible");

    
        for(int i=0;i<a1;i++)
        {
            for(int k=0;k<b1;k++)
            {
                resmat[i][k]=mat1[i][k]+mat2[i][k];
            }
        }
    
    printf("Resultant Matrix(Addition of both the matrix) is:\n");
    for(int i=0;i<a1;i++)
        {
            for(int k=0;k<b1;k++)
            {
                printf("%d",resmat[i][k]);
                printf(" ");
            }
            printf("\n");
        }
}