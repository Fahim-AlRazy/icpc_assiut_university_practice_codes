#include<stdio.h>
int main(void){
    int N,k=0;
    scanf("%d",&N);
    for(int i=1; i<=N; i++){
        for (int j = 0; j < N - i; j++) {
            printf(" ");
        }
        for(int j=0;j<(2 * i - 1);j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=N; i>0; i--){
        for (int j = N - i; j > 0; j--) {
            printf(" ");
        }
        for(int j=0;j<(2 * i - 1);j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}