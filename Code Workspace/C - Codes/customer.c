#include <stdio.h>

struct customer
{
    char name[10];
    char city[10];
    char email[10];
};

int main()
{
    struct customer cus;
    scanf("%s",cus.name);
    scanf("%s",cus.city);
    scanf("%s",cus.email);

  printf("%s %s %s",cus.name,cus.city,cus.email);

}