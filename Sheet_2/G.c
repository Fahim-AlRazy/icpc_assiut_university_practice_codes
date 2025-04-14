#include<stdio.h>
int main(void){
    int N,T,factorial;
    scanf("%d", &N);
    for(int i=1;i<=N;i++){
    scanf("%d", &T);
    factorial=1;
    while(T>0){
        factorial*=T;
        T--;
    }
    printf("%d\n", factorial);
    }
    return 0;
}