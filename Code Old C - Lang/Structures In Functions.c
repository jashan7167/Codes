#include<stdio.h>

struct student
{
    char name[20];
    int rollno;
    int age;
    char add[20];
    
};
void allinfo(struct student);
void rolldisplay(struct student);
void agedisplay(struct student );
int main()
{
struct student st;

    printf("Enter Age:\n");
     scanf(" %d",&st.age);
     if(st.age>=11 && st.age<=14)
     {
 printf("Enter Name:\n");
    scanf("%s",&st.name);
    printf("Enter Roll no:\n");
    scanf("%d",&st.rollno);
    printf("Enter Address:\n");
    scanf(" %s",&st.add);
     }

allinfo(st);
agedisplay(st);
rolldisplay(st);
}
void allinfo(struct student stud)
{
printf("Details of all students are given below:\n");
    printf("Name=%s\nAge=%d\nRoll no=%d\nAddress=%s",stud.name,stud.age,stud.rollno,stud.add );
}
void rolldisplay(struct student stud)
{
    if(stud.roll%2==0)
    {
        printf("%s",stud.name);
    }
    else
    printf("Not Having Even roll no");
}
void agedisplay(struct student std)
{
    if(stud.age==14)
    {
        printf("%s",stud.name)
    }
    else
    printf("There is no student having age 14");
}
