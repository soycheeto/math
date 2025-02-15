#include <stdio.h>

int gcd(int m ,int n){
    if(n==0){
        return m;
    }
    return gcd(n, m%n);
}
int main(int cnt, char *argv[]){
    int m,n;
    sscanf(argv[1], "%i", &m);
    sscanf(argv[2], "%i", &n);
    if(m ==0 || n==0){
        return -1;
    }
    printf("GCD of %i and %i = %i\n", m, n, gcd(m,n));
    return m;
}