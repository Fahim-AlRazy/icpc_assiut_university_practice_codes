#include<stdio.h>
#include<math.h>
int main(void){
    int a,b,max,min;
    scanf("%d %d",&a,&b);
    if(a>b){
        max=a;
        min=b;
    }
    else{
        max=b;
        min=a;
    }
    if (a + b == 0) {
        printf("NO\n");
        return 0;
    }
    if (max-min <= 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}