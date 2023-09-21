#include<stdio.h>
#include<string.h>

int main()
{
    struct student
    {
        char name[20];
    int roll;
    float marks;
    };
    struct student st[4];

    for(int i=0;i<=4;i++)
    {
    scanf("%s",&st[i].name);
    scanf("%d",&st[i].roll);
    scanf("%f",&st[i].marks);
    }

}
