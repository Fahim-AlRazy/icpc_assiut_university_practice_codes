#include<stdio.h>
int main(void){
    int N,temp;
    scanf("%d", &N);
    int A[N];
    for ( int i = 0; i < N; i++){
        scanf("%d", &A[i]);
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(A[i]<A[j]){
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
    for(int i = 0; i < N; i++){
        printf("%d ", A[i]);
    }
    return 0;
}