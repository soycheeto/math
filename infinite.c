#include <stdio.h>
#include <stdlib.h>

typedef double real;
real frac(int iter){
    if(iter<=0){
        return 1.0;

    }
    return 1.0+1.0/frac(--iter);
}

int main(int cnt, char *argv[]){
    int iter = 10;
    if (cnt>1){
        iter = atoi(argv[1]);
    }
    printf("Sum of the infinite fraction = %.20f\n", frac(iter));
    return 0;
}