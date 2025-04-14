#include<stdio.h>
int main(void){
    int N,num;
    char S;
    scanf("%c %d", &S,&N);
    for(int i=0;i<N;i++){
        scanf("%d",&num);
        for(int j=0;j<num;j++){
            printf("%c", S);
        }
        printf("\n");
    }
    return 0;
}