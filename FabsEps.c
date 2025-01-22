#include <stdio.h>
#include <math.h>

int main(int cnt, char *argv){
    float x, y, val=3, eps=1e-6;
    x = sqrt(sqrt(val));
    y = x*x*x*x;
    if(y==val){
        printf("%f == %f\n", y, val);
    }
    else{
        printf("%f!=%f\n", y, val);
    }
    if(fabs(y-val)<eps){
        printf("fabs(y-val) < %f\n", eps);
    }
    else{
        printf("fabs(y-val) > %f\n", eps);
    }
    return 0;
}