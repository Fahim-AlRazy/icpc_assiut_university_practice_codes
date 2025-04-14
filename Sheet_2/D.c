#include<stdio.h>
int main(void){
    int pass=1999,X;
    while(1){
        scanf("%d", &X);
    if(pass==X){
    printf("Correct");
    break;}
    printf("Wrong\n");
    }
    return 0;
}