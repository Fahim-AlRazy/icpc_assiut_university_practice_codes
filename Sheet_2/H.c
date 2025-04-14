#include<stdio.h>
int main(void){
    int X,prime=1;
    scanf("%d", &X);
    for(int i=2;i<X;i++){
        if(X%i==0){
            printf("NO");
            prime=0;
            break;
        }
    }
    if(prime){
        printf("YES");
    }
    return 0;
}