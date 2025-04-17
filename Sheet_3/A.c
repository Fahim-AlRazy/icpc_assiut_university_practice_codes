#include<stdio.h>
int main(void){
    int N,sum=0;
    scanf("%d", &N);
    int A[N];
    for(int i=0; i<N; i++){
        scanf("%d", &A[i]);
        sum += A[i];
    }
    if(sum < 0){
        sum = -sum;
    }
    printf("%d", sum);
    return 0;
}