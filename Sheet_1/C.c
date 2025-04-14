#include<stdio.h>
int main(void){
    int X,Y;
    scanf("%d %d", &X, &Y);
    printf("%d + %d = %d\n", X, Y, X+Y);
    printf("%d * %d = %d\n", X, Y, X*Y);
    printf("%d - %d = %d", X, Y, X-Y);
    return 0;
}