#include <stdio.h>
void display(int n,int *array1);
void display(int n,int *array1)
{
    for(int i = 0 ; i<n; i++)
    {
        printf("%d \t",array1[i]);
    }
}
void rotatearray(int *arr,int n,int rot);
void rotatearray(int *arr,int n,int rot)
{
    for(int i=1;i<=rot;i++)
    {
        int a = arr[n-1]; int i;
        for(i =n-1;i>0;i--)
        {
             arr[i] = arr[i-1];
        }
        arr[0] = a;
    }

}

int main()
{
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(array)/sizeof(array[0]);
    int rotate;
    printf("Size of the array = %d\n",n);

printf("Enter the no of rotations you want to do the array:\n");

scanf("%d",&rotate);
rotatearray(&array,n,rotate);


printf("Rotated Array Is:\n");
display(n,array);
}