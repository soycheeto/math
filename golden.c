int printf(const char *, ...);
double atof(const char *, ...);
double fabs(double);

double f(double x){
    return x*x-x-1;
}

double df(double x){
    return 2*x-1;
}

int main(int cnt, char *argv[]){
    double x=3.0, fx, fp, eps=1e-10;
    if(cnt>1){
        x=atof(argv[1]);
    }
    do{
        fx=f(x);
        fp=df(x);
        x=x-fx/fp;
    }
    while(fabs(fx)>eps);
        printf("One root of f(x) is x=%12.f\n", x);
    return 0;
}