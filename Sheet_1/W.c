#include<stdio.h>
int main(void){
    long long int A,B,C;
    char S,Q;
    scanf("%lld %c %lld %c %lld", &A, &S, &B,&Q,&C);
    if(S=='+'){
        if(A+B==C){
            printf("Yes");
        }
        else{
            printf("%lld", A+B);
        }
    }
    else if(S=='-'){
        if(A-B==C){
            printf("Yes");
        }
        else{
            printf("%lld", A-B);
        }
    }
    else if(S=='*'){
        if(A*B==C){
            printf("Yes");
        }
        else{
            printf("%lld", A*B);
        }
    }
    else if(S=='/'){
        if(A/B==C){
            printf("Yes");
        }
        else{
            printf("%lld", A/B);
        }
    }
    return 0;
}