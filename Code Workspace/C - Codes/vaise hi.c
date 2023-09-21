#include <stdio.h>

struct paymentdate
{
    int month;
    int day;
    int year;
};
struct customer
{
    int customer_id;
    char customer_name[10];
    char street[10];
    char city[10];
    int contact_details;
    char account_number[100];
    float old_balance;
    float current_payment;
    float new_balance;
    struct paymentdate pd;
};

int main()
{
    struct customer c;

    scanf("%d\n",&c.customer_id);
    gets(c.customer_name);
    gets(c.street);
    gets(c.city);
    scanf("%d",&c.contact_details);
    scanf("%s",c.account_number);
    scanf("%f",&c.old_balance);
     scanf("%f",&c.current_payment);
scanf("%d  %d  %d  %f",&c.pd.day,&c.pd.month,&c.pd.year,&c.new_balance);
    
printf("%d\n",c.customer_id);
printf("%s\n",c.customer_name);
printf("%s\n",c.street);
printf("%s\n",c.city);
printf("%d\n",c.contact_details);
printf("%s\n",c.account_number);
printf("%.2f\n",c.old_balance);
printf("%.2f\n",c.current_payment);
printf("%02d \n %02d \n %02d \n %1.2f",c.pd.day,c.pd.month,c.pd.year,c.new_balance);
}