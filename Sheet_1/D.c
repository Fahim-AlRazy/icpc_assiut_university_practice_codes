#include<stdio.h>
int main(void){
    long long int A,B,C,D;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
    printf("Difference = %lld",(A*B)-(C*D));
    return 0;
}