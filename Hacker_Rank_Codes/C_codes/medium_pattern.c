#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int prt=n;
    for(int i=0;i<((n*2)-1);i++){
        for(int j=0;j<((n*2)-1);j++){
            if(i==0 || i==((n*2)-1)){
                printf("%d",n);
            }
            else if(j==0 || j==((n*2)-1)){
                printf("%d",n);           
            }
            else if(i==1 || i==((n*2)-2)){
                printf("%d",n-1);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}