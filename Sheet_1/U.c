#include<stdio.h>
int main(void){
    float N;
    scanf("%f", &N);
    float test = N-(int)N;
    if(test==0.0){
        printf("int %d", (int)N);
    }
    else{
        printf("float %d %f", (int)N, N-(int)N);
    }
    return 0;
}