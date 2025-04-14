#include<stdio.h>
int main(void){
    int A,B,max,gcd;
    scanf("%d %d", &A, &B);
    if(A>B){
        max=A;
    }else{
        max=B;
    }
    for(int i=1;i<=max;i++){
        if(A%i==0 && B%i==0){
            gcd=i;
        }
    }
    printf("%d\n", gcd);
    return 0;
}