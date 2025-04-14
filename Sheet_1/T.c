#include<stdio.h>
int main(void){
    long long int A,B,C,max;
    scanf("%lld %lld %lld", &A, &B, &C);
    if(A>=B && A>=C){
       if (B>=C){
        printf("%lld\n%lld\n%lld\n\n",C, B,A);
       }
       else if(C>=B){
        printf("%lld\n%lld\n%lld\n\n",B, C,A);
       } 
    }
    else if(B>=A && B>=C){
        if(A>=C){
            printf("%lld\n%lld\n%lld\n\n",C, A,B);
        }
        else if(C>=A){
            printf("%lld\n%lld\n%lld\n\n",A, C,B);
        }
    }
    else if(C>=A && C>=B){
        if(A>=B){
            printf("%lld\n%lld\n%lld\n\n",B, A,C);
        }
        else if(B>=A){
            printf("%lld\n%lld\n%lld\n\n",A, B,C);
        }
    }
    printf("%lld\n%lld\n%lld", A,B,C);
    return 0;
}