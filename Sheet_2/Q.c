#include<stdio.h>
int main(void){
    int T,N;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%d",&N);
        while(N>0){
        printf("%d ",N%10);
        N/=10;
        }
        printf("\n");
    }
    return 0;
}