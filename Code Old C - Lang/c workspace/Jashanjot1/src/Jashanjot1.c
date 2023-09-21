#include <stdio.h>

int main()
{
 setbuf(stdout ,NULL);
char i=0;
while(i<=255)
{
	printf("ASCII value for %c is %d",i);
}
return 0;
}






