#include<stdio.h>
int main(void){
    int X,P;
    float price;
    scanf("%d %d",&X,&P);
    price=(100.0*P)/(100.0-X);
    printf("%.2f",price);
    return 0;
}