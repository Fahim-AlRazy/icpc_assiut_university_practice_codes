#include<stdio.h>
int main(void){
    long long int X,test,reverse;
    scanf("%lld", &X);
    test=X;
    reverse=0;
    while(test>0){
        reverse=reverse*10+test%10;
        test/=10;
    }
    printf("%lld\n", reverse);
    if(reverse==X){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}