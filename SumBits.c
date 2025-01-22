int scanf(const char *, ...);
int printf(const char *, ...);

int main(int cnt, char *argv[]){
    signed char a, sum =0;
    int i, x;
    char str[10]={0,};
    while(1){
        printf("Enter a small int to fit in a byte:");
        scanf("%i", &x);
        a = x;
        sum +=a;
        for (i=0;i<8;i++){
            if(sum &(1<<i)) str[7-i] ='1'; else str[7-i]='0';
        }
        printf("Val=%i bits=%s\n", sum, str);
    }
    return 0;
}