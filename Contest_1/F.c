#include<stdio.h>
int main(void){
    long long int A,B,Res;
    scanf("%lld %lld",&A,&B);
    Res=A^B; 
    printf("%lld\n",Res); 
    return 0;
}

/*Peter Parker's flawed circuit performs bitwise addition without carry.
 This means that instead of performing normal addition, 
 the addition is done bit by bit using the XOR (^) operator. 
 The XOR operation mimics addition without carry in binary.*/