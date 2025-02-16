//factorial, double factorial, superfactorial, hyperfactorial and primorial functions
#include <stdio.h>
#include <math.h>
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
int dofactorial(int m){
    if (m==0 || m == 1){
        return 1;
    }
    return m * dofactorial(m-2);
}
int superfactorial(int l){
    if ( l == 0||l==1){
        return 1;
    }
    return factorial(l) * superfactorial(l-1);
}
int hyperfactorial(int k){
    if(k==0||k==1){
        return 1;
    }
    return pow(k,k) * hyperfactorial(k-1);
}
int is_prime(int j, int i) {
    if (j < 2) return 0;
    if (i * i > j) return 1;
    if (j % i == 0) return 0; 
    return is_prime(j, i + 1); 
}
long long primorial(int j) {
    if (j < 2) return 1;  
    if (is_prime(j, 2)) return j * primorial(j - 1); 
    return primorial(j - 1); 
}
int main(void) {
    int n = 5;
    int m = 9;
    int l = 5;
    int k = 4;
    int j = 12;

    if (n < 0 || m < 0) {
        return -1;
    }
    printf("Factorial of %d = %d\n", n, factorial(n));
    printf("Double factorial of %d = %d\n", m, dofactorial(m));
    printf("Superfactorial of %d = %d\n", l, superfactorial(l));
    printf("Hyperfactorial of %d = %d\n", k, hyperfactorial(k));
    printf("Primorial of %d is %lld\n", j, primorial(j));
    return 0;
}