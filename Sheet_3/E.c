#include<stdio.h>
int main(void){
    int N,min,idx=0;
    scanf("%d", &N); 
    int A[N];
    for(int i=0; i<N; i++){
        scanf("%d", &A[i]);
    }
    min = A[0];
    for(int i=1; i<N; i++){
        if(A[i]<min){
            min = A[i];
            idx=i;
        }
    }
    printf("%d %d", min, idx+1);
    return 0;
}