#include <stdio.h>

void first(){
    printf("Sveiks tam, kurš nokompilēja un izpildīja!\n");   
}
void reiz(int a, int b){
    size_t c=a*b;
    printf("%d reiz %d ir %zu\n",a,b,c);
}
double pi(){
    double pi=3.14159265358979;
    return pi;
}
size_t fib(unsigned char n){
    if (n == 1 || n == 2) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    first();
    reiz(146,213); //divu veselu skaitļu reizinājums
    printf("PI = %.8lf\n",pi());
    unsigned char n=36; //indeksa kārta Fibonači skaitlim
    printf("%hhu. kārtas Fibonači skaitlis ir %zu",n,fib(n));
    return 0;
}
