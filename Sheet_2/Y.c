#include<stdio.h>
int fib(int n){
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}
int main(void){
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        printf("%d ",fib(i));
    }
    return 0;
}