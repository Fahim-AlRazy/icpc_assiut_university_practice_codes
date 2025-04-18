#include<stdio.h>
int main(void){
    int N;
    scanf("%d", &N);
    int A[N];
    for ( int i = 0; i < N; i++){
        scanf("%d", &A[i]);
    }
    int none = 0;
    for(int i = 0; i < N/2; i++){
        if(A[i] != A[N-1-i]){
            none = 1;
            break;
        }
    }
    if(none){
        printf("NO");
    }
    else{
        printf("YES");
    }
    return 0;
}