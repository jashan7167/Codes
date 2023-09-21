#include <stdio.h>

int main()
{
    int a[3][3];


    for(int i = 0;i<3;i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int k,l,m;
    int count = 0;
    int count1 = 0;
    for(int i =0; i<3;i++)
    {
        
        for(int j =0;j<3;j++)
        {
          for(k = i,l=0;l<3;l++)
          {
              if(a[k][j]<a[k][l])
              {
                  count++;
              }
          }
          for(k = i,m = 0;m<3;m++)
          {
              if(a[k][j] > a[m][j])
              {
                  count1++;
              }
          }
          if(count1 == 2 && count == 2)
          {
              printf("%d",a[i][j]);
          }
          count1 =0;
          count= 0;
             
        }
        
    
    }

}