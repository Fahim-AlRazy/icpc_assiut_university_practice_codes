#include<stdio.h>
int main(void){
    char n;
    scanf("%c",&n);
    if(n>='a' && n<'z'){
        printf("%c",n+1);
    }
    else if(n=='z'){
        printf("%c",n-25);
    }
    return 0;
}