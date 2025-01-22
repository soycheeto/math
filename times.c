int printf(const char *, ...);
int atoi(const char *);

int main(int cnt, char *argv[]){
    float x=0.1, sum=0;
    int i, times=100;
    if(cnt>1){
        times=atoi(argv[1]);
    }
    for(i=0; i<times; i++){
        sum+=x;
    }
    printf ("%d added %i times = %d\n", x, i, sum);
    return 0;
}