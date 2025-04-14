#include<stdio.h>
int main(void){
    int N,k=0;
    scanf("%d", &N);
    for(int i=1; i<=N; i++){
        for(int j=0;j<i+k;j++){
            printf("*");
        }
        k++;
        printf("\n");
    }
    return 0;
}