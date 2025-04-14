#include<stdio.h>
int main(void){
    int T,X,Y,from,till,sum;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%d %d",&X,&Y);
        if(X>Y){
            from = Y;
            till = X;
        }
        else{
            from = X;
            till = Y;
        }
        sum=0;
        for(int j=from+1; j<till; j++){
            if(j%2!=0){
                sum+=j;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}