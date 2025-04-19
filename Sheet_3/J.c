#include<stdio.h>
int main(void){
    int N,min=0,count=0;
    scanf("%d", &N);
    int A[N];
    for ( int i = 0; i < N; i++){
        scanf("%d", &A[i]);
    }
    min=A[0];
    for(int i = 1; i < N; i++){
        if(A[i]<min){
            min=A[i];
        }
    }
for(int i = 0; i < N; i++){
    if(A[i]==min){
        count++;
    }
}
if (count%2!=0){
    printf("Lucky\n");
}
else{
    printf("Unlucky\n");
}
    return 0;
}