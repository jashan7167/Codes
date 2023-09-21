#include<stdio.h>
#include<unistd.h>


void dowork()
{
    fork();
    fork();
    printf("Hello World!");
}

int main()
{
    dowork();
    printf("Hello World!");
}