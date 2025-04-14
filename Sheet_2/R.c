#include<stdio.h>
int main(void){
    int M,N,from,till,sum;
    while(1){
    scanf("%d %d", &M, &N);
    if(M<0 || N<=0){
        break;
    }
    if(M>N){
        from = N;
        till = M;
    }
    else{
        from = M;
        till = N;
    }
    sum = 0;
    for(int i=from; i<=till; i++){
        sum+=i;
        printf("%d ",i);
    }
    printf("sum =%d\n",sum);
}
    return 0;
}