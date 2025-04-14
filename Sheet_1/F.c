#include<stdio.h>
int main(void){
    long long int a,b;
    scanf("%lld %lld", &a, &b);
    long long int c=a%10, d=b%10;
    printf("%lld",c+d);
    return 0;
}