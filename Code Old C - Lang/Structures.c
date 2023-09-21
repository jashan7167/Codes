#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    struct distances
    {
        int feet1;
        float inch1;
        int feet2;
        float inch2;
    };
    struct distances dis;
    scanf("%d",&dis.feet1);
    scanf("%f",&dis.inch1);
    scanf("%d",&dis.feet2);
    scanf("%f",&dis.inch2);
    
    int sumf=dis.feet1+dis.feet2;
    float sumi=dis.inch1+dis.inch2;
    printf("Sum of distances = %d'-%0.1f''",sumf,sumi);
    
    return 0;
    }




    

