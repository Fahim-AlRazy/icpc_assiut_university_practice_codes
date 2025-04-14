//Given a number N. Print all the divisors of N in ascending order.
#include<stdio.h>
int main(void){
    int N;
    scanf("%d", &N);
    for(int i=1;i<=N;i++){
        if(N%i==0){
            printf("%d\n", i);
        }
}
    return 0;
}