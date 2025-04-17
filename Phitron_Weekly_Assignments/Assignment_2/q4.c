#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N,pos=0,neg=0;
    scanf("%d",&N);
    int V[N];
    for(int i=0;i<N;i++){
        scanf("%d",&V[i]);
        if(V[i]>0){
            pos+=V[i];
        }
        else if(V[i]<0){
            neg+=V[i];
        }
    }
    printf("%d %d",pos ,neg);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
