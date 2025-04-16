#include<stdio.h>
int main(void){
    int N,sum=0;
    scanf("%d", &N);
    int A[N];
    for(int i=0; i<N; i++){
        scanf("%lld", &A[i]);
        if(A[i] < 0){
            A[i] = -A[i];
        }
        sum += A[i];
    }
    printf("%d", sum);
    return 0;
}