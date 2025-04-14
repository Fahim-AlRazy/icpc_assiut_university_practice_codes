#include<stdio.h>
int main(void){
    int X,prime=1;
    scanf("%d", &X);
    for(int i=1;i<=X;i++){
        prime=1;
        for(int j=2;j<i;j++){
            if(i%j==0){
                prime=0;
                break;
            }
        }
        if(prime && i!=1){
            printf("%d ", i);
        }
    }
    return 0;
}