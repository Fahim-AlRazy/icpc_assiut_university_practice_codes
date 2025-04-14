#include<stdio.h>
#include<math.h>
long long int power(long long int base, long long int exp);
int main(void){
    long long int A,B,C,D;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
    double logA = B * log(A);
    double logC = D * log(C);
    if (logA > logC) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}