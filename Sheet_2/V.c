#include<stdio.h>
int main(void){
    int N,pum,count=1;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        for(int j=0;j<=3;j++){
            if(j==3){
                printf("PUM\n");
                count++;
                break;
            }else{
            printf("%d ",count);
            count++;
        }
        }
    }
    return 0;
}