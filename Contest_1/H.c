#include<stdio.h>
int main(void){
    long long int n,k,a;
    scanf("%lld %lld %lld",&n,&k,&a);
    double check=((double)n*k)/(double)a;
    long long int check1=(long long int)check;
    if((check-check1 )!=0){
        printf("double");
    }
    else{
    if(check<=2147483647 && check>=-2147483648){
        printf("int");
    }
    else{
        printf("long long");
    }
}
    return 0;
}