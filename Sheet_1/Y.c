#include<stdio.h>
int main(void){
    long long int A,B,C,D,multi;
    scanf("%lld %lld %lld %lld",&A, &B, &C, &D);
    multi=(A%100);
    multi*=(B%100);
    multi*=(C%100);
    multi*=(D%100);
    multi=multi%100;
    printf("%02lld", multi);
    return 0;
}