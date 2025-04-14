#include<stdio.h>
int main(void){
    int A,B,lucky=1,brek=0,test,printed;
    scanf("%d %d", &A, &B);
    for(int i=A;i<=B;i++){
        test=i;
        while(test>0){
            if(test%10!=7 && test%10!=4){
                lucky=0;
                break;
            }
            test/=10;
            }
            if(lucky){
                printf("%d ", i);
                printed=1;
        }
        lucky=1;
    }
    if(!printed){
        printf("-1");
    }
    return 0;
}