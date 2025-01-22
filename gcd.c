#include <stdio.h>
#include <stdlib.h>

int main(int cnt, char *argv[]){
    int m,n,count=0;
    sscanf(argv[1], "%i", &m);
    sscanf(argv[2], "%i", &n);
    while(1){
        if(m>n)
            m = m-n;
               
        else
            n = n-m;
        if(m==n)
            break;
        printf("count=%i m=%i n=%i", ++count, m, n);
    }
    printf("GCD = \n", m);
    return m;

}