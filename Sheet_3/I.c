#include<stdio.h>
int main(void){
    int T,N,min=0,calc=0;
    scanf("%d", &T);
    for(int t = 0; t < T; t++){
        scanf("%d", &N);
        int A[N];
        for ( int i = 0; i < N; i++){
            scanf("%d", &A[i]);
        }
        min = A[0]+A[1]+2-1;
        for(int i = 1; i < N; i++){
            for(int j = i+1; j < N; j++){
                if(i>=1 && i<j && j<=N){
                    calc = A[i]+A[j]+j-i;
                }
                if(min > calc){
                    min = calc;
                }
            }
        }
        printf("%d\n", min);
    }
    return 0;
}