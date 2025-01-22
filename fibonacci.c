#include <stdio.h>
#include <stdlib.h>

int main(int cnt, char *argv[]){
    int a=1, b=1, t, n=0, iter=10;
    if(cnt>1){
        iter=atoi(argv[1]);
    }
    while(n<iter){
        t=a;
        a = a+b;
        b = t;
        n++;
    }

    printf("The ratio of %i/%i after %i iterations= %f\n", a, b, iter, a/b);
    return 0;
}