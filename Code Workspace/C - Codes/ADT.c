#include <stdio.h>

struct array

{
    int A[10];
    int size;
    int length;
};
void display(struct array a);
void display(struct array a)
{
    printf("%d",a.length);
for(int i=0;i<a.length;i++)
{
    printf("%d\t",a.A[i]);
}
}
void append(struct array *a,int n);
void append(struct array *a,int n)
{
    if(a->length<a->size)
    {
    a->A[a->length++] = n;

    }
}
void insert(struct array *a,int n,int index);
void insert(struct array *a,int n,int index)
{
    if(a->length < a->size)
    {
        for(int i = a->length;i>index;i--)
        {
            a->A[i] = a->A[i-1];
        }
        a->A[index] = n;
        a->length++;
    }
}
void delete(struct array *a,int index);
void delete(struct array *a,int index)
{
    for(int i = index;i<a->length;i++)
    {
        a->A[i] = a->A[i+1];
    }
    a->length --;
}
int main()
{
struct array a = {{1,2,3,4,5},10,5};
int num;

printf("Enter the no you want to append in the array");
scanf("%d",&num);
append(&a,num);
printf("Enter the element and the index you want to insert the element at");
int index;
int n1;
scanf("%d",&index);
scanf("%d",&n1);
insert(&a,n1,index);
printf("Enter the index at which you want to delete the element");
int index2;
scanf("%d",&index2);
delete(&a,index2);
display(a);

}