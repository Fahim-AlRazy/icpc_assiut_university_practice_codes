#include<stdio.h>
int main(void){
    int N,A,B,sum,print=0,trial;
    scanf("%d %d %d", &N,&A,&B);
    for(int i=0; i<=N; i++){
        sum=0;
        trial=i;
        while(trial>0){
            sum+=trial%10;
            trial/=10;
        }
        if(sum>=A && sum<=B){
            print+=i;
        }
    }
    printf("%d\n",print);
    return 0;
}