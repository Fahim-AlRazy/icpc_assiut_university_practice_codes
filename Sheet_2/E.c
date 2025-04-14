#include<stdio.h>
int main(void){
    int N,input,max=0;
    scanf("%d", &N);
    scanf("%d", &input);
    max=input;
    for(int i = 1; i < N; i++){
        scanf("%d", &input);
      if(input > max){
        max=input;
      }
    }
    printf("%d\n", max);
    return 0;
}