#include<stdio.h>
int main()
{
    int X,trial;
    scanf("%d",&X);
    trial=X;
    while(1){
        if(trial/10==0){
            break;
        }
        trial/=10 ;
    }
    if(trial%2==0){
        printf("EVEN");
    }
    else{
        printf("ODD");
    }
    return 0;
}