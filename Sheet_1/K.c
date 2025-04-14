#include<stdio.h>
#include<stdbool.h>
int main(void){
    int A,B,C,max,min;
    scanf("%d %d %d",&A,&B,&C);
    max=A;
    min=A;
   if(B>max){
        max=B;
    }
    if(C>max){
          max=C;
     }
    if(B<min){
        min=B;
    }
    if(C<min){
        min=C;
    }
    printf("%d %d\n",min,max);
    return 0;   
}