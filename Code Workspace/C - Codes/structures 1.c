#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    struct student
    {
        char name[101];
        int roll;
        float marks;
    };
     struct student st1;
    
    scanf("%s",st1.name);
     scanf("%d",&st1.roll);
scanf("%f",&st1.marks);    
    if((st1.marks>=0 && st1.marks<=101) && (st1.roll>=0 && st1.roll<=100))
    {
    printf("Displaying Information:\n");
    printf("Name:%s\n",st1.name);
    printf("Roll Number:%d\n",st1.roll);
    printf("Marks:%0.1f",st1.marks);
    }
      return 0;
            
    }
  

