#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,sum=0,trial;
    scanf("%d", &n);
    trial=n;
    while(trial>0){
        sum+=trial%10;
        trial/=10;
    }
    printf("%d",sum);
    return 0;
}