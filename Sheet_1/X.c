#include<stdio.h>
int main(void){
    long long int l1,l2,r1,r2;
    scanf("%lld %lld %lld %lld",&l1,&r1,&l2,&r2);
    if (r1 < l2 || r2 < l1) {
        printf("%d", -1);
    } else {
        long long int start = (l1 > l2) ? l1 : l2; 
        long long int end = (r1 < r2) ? r1 : r2;   
        printf("%lld %lld", start, end);
    }
    return 0;
}