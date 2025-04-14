#include<stdio.h>
int main(void){
    long long int N;
    long long int sum=0;
    scanf("%lld", &N);
    sum=(N*(N+1))/2;
    printf("%lld", sum);
    return 0;
}