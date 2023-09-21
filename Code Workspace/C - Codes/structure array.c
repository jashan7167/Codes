#include<stdio.h>

struct student
{
    char name[20];
    int rollno;
    int age;
    char add[20];
    
};
void allinfo(struct student* ,int );

int main()
{

printf("Enter the no of students you want to add the details of");
int num;
scanf("%d",&num);
struct student st[num];

for(int i=0;i<=num-1;i++)
{
    printf("Enter Age:\n");
     scanf(" %d",&st[i].age);
     if(st[i].age>=11 && st[i].age<=14)
     {
 printf("Enter Name:\n");
    scanf("%s",&st[i].name);
    printf("Enter Roll no:\n");
    scanf("%d",&st[i].rollno);
    printf("Enter Address:\n");
    scanf(" %s",&st[i].add);
     }
}
allinfo(&st,num);
}
void allinfo(struct student *stud,int n)
{
 struct student stud[n];
printf("Details of all students are given below:\n");
for(int i=0;i<=n;i++)
{
    printf("Name=%s\nAge=%d\nRoll no=%d\nAddress=%s",stud[i].name,stud[i].age,stud[i].rollno,stud[i].add );
}
}