#include<stdio.h>
int main(void){
    char X;
    scanf("%c", &X);
    if(X>='0' && X<='9'){
        printf("IS DIGIT");
    }
    else if(X>='A' && X<='Z'){
        printf("ALPHA\nIS CAPITAL");
    }
    else if(X>='a' && X<='z'){
        printf("ALPHA\nIS SMALL");
    }
    return 0;
}