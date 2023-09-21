#include <stdio.h>

void enterData(int firstMatrix[][10], int secondMatrix[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond);
void multiplyMatrices(int firstMatrix[][10], int secondMatrix[][10], int multResult[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond);
void display(int mult[][10], int rowFirst, int columnSecond);

int main()
{
    int firstMatrix[10][10], secondMatrix[10][10], mult[10][10], rowFirst, columnFirst, rowSecond, columnSecond, i, j, k;

    scanf("%d %d", &rowFirst, &columnFirst);
    scanf("%d %d", &rowSecond, &columnSecond);


    if(columnFirst==rowSecond)
    {
        enterData(firstMatrix,secondMatrix,rowFirst,columnFirst,rowSecond,columnSecond);

        // Function to multiply two matrices.
        multiplyMatrices(firstMatrix,secondMatrix,mult, rowFirst, columnFirst, rowSecond, columnSecond);
           
        display(mult,rowFirst,columnSecond);
    }
    else
         printf("Error! column of first matrix not equal to row of second.\n");
    return 0;
}

void enterData(int firstMatrix[][10], int secondMatrix[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond)
{
    for(int i=0;i<rowFirst;i++)
    {
        for(int j=0;j<columnFirst;j++)
        {
        scanf("%d",&firstMatrix[i][j]);
        }
    }
    for(int i=0;i<rowSecond;i++)
    {
        for(int j=0;j<columnSecond;j++)
        {
        scanf("%d",&secondMatrix[i][j]);
        }
    }
}
int sum=0;

void multiplyMatrices(int firstMatrix[][10], int secondMatrix[][10], int mult[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond)
{
    for(int i=0;i<rowFirst;i++)
    {
        for(int j=0;j<columnSecond;j++)
        {
            for(int k=0;k<rowSecond;k++)
            {

            int prod=firstMatrix[i][k]*secondMatrix[k][j];
            sum=sum+prod;  
            } 
            mult[i][j]=sum;
            sum=0;  
    }
}
}


void display(int mult[][10], int rowFirst, int columnSecond)
{
    printf("Multiplication of the matrix is:\n");
    for(int i=0;i<rowFirst;i++)
    {
        for(int j=0;j<columnSecond;j++)
        
            printf("%d  ",mult[i][j]);
         
          }
}
