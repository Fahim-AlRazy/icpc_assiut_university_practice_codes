#include<stdio.h>
int main(void){
    float N;
    scanf("%f", &N);
    if(N>=0.0 && N<=25.0){
        printf("Interval [0,25]");
    }
    else if(N>25.0 && N<=50.0){
        printf("Interval (25,50]");
    }
    else if(N>50.0 && N<=75.0){
        printf("Interval (50,75]");
    }
    else if(N>75.0 && N<=100.0){
        printf("Interval (75,100]");
    }
    else{
        printf("Out of Intervals");
    }
    return 0;
}