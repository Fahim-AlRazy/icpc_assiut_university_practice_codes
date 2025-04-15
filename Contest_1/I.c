#include<stdio.h>
int main(void){
    int A,B,max,min,N;
    scanf("%d", &N);
    A= N%10;
    B= N/10;
    if(A>B){
        max=A;
        min=B;
    }
    else{
        max=B;
        min=A;
    }
    if(min==0){
        printf("YES\n");
    }
    else{
    if(max%min==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}
    return 0;
}