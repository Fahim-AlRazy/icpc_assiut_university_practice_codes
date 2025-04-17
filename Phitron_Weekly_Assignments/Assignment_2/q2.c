#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d",&N);
  //  int trial=N;
    if(N>0){
        for(int i=1;i<=N;i++){
            printf("%d ",i);
        }
    }
    else if(N<0){
        for(int j=N;j<=0;j++){
            printf("%d ",j);
        }
    }
    return 0;
}
